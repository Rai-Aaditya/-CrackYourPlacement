#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<string> &ans, string s, int o, int c){
        if(o==0 && c==0){
        ans.push_back(s);
        return;
        }
        string s1=s,s2=s;
        if(o){
            s1+='(';
            solve(ans,s1,o-1,c);
        }
        if(o<c){
            s2+=')';
            solve(ans,s2,o,c-1);
        }

    }
    vector<string> generateParenthesis(int n) {
        int o=n,c=n;
        vector<string> ans;
        string s;
        solve(ans,s,o,c);
        return ans;
    }
};