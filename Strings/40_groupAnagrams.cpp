//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==1) return {{strs[0]}};
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};