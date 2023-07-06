#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target=0, n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            if(nums[i]+nums[i+1]+nums[i+2]>target) break;
            if(nums[i]+nums[n-1]+nums[n-2]<target) continue;
            int low=i+1, high=n-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==target){
                    ans.push_back({nums[i], nums[low++], nums[high--]});
                    while(low<high && nums[low]==nums[low-1]) low++;
                    while(low<high && nums[high]==nums[high+1]) high--;
                }
                else if(sum<target){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return ans;
    }
};