#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0, sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int &i:nums){
            sum+=i;
            int rem=sum-k;
            ans+=mp[rem];
            mp[sum]++;
        }
        return ans;
    }
};