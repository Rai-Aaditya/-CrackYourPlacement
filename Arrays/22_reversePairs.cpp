// raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int> &a, int low, int mid, int high){
        int left = low, right = mid+1;
        vector<int> ans;
        while(left<=mid && right<=high){
            if(a[left]<=a[right]) ans.push_back(a[left++]);
            else{
                ans.push_back(a[right++]);
            }
        }
            while(left<=mid) ans.push_back(a[left++]);
            while(right<=high) ans.push_back(a[right++]);
        for(int i=low; i<=high;i++){
            a[i]=ans[i-low];
        }
    }
    int countPairs(vector<int> &a, int low, int mid, int high) {
        int count = 0;
        int right = mid + 1;
        for (int left = low; left <= mid; left++) {
            while (right <= high && static_cast<long long>(a[left]) > static_cast<long long>(2 * static_cast<long long>(a[right]))) {
                right++;
            }
            count += right - (mid + 1);
        }
        return count;
    }
    int mergeSort(vector<int> &nums, int low, int high){
        int count=0;
        if(low>=high) return 0;
        int mid = (low+high)>>1;
        count += mergeSort(nums,low,mid);
        count += mergeSort(nums,mid+1,high);
        count += countPairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n-1);
    }
};