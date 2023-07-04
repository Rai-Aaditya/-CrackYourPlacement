#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans="";
        string front =strs.front();
        string back = strs.back();
        int i=0;
        while(front[i]==back[i] && i<front.size() && i<back.size()){
            ans.push_back(front[i]);
            i++;
        }
        return ans;
    }
};