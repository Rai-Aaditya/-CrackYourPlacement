#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if(n<4) return ans;
        for(int i=0;i<n-3;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            if((long long)nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            if((long long)nums[i]+nums[n-1]+nums[n-2]+nums[n-3]<target) continue;
            for(int j=i+1; j<n-2;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                if((long long)nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                if((long long)nums[i]+nums[j]+nums[n-1]+nums[n-2]<target) continue;
                int low=j+1, high=n-1;
                while(low<high){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[low]+nums[high];
                    if(sum==target){
                        ans.push_back({nums[i], nums[j], nums[low++], nums[high--]});
                        while(low<high && nums[low]==nums[low-1]) low++;
                        while(low<high && nums[high]==nums[high+1]) high--;
                    }
                    else if(sum<target) low++;
                    else high--;
                }
            }
        }
        return ans;
    }
};