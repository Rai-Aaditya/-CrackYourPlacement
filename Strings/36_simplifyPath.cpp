#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string ans="";
        int n=path.size();
        for(int i=0;i<n;i++){
            if(path[i]=='/') continue;
            string temp="";
            while(i<n && path[i]!='/'){
                temp+=path[i];
                ++i;
            }
            if(temp==".") continue;
            else if(temp==".."){
                if(st.size()) st.pop();
            }
            else{
                st.push(temp);
            }
        }
        while(st.size()){
            ans='/'+st.top()+ans;
            st.pop();
        }
        if(ans.size()==0) return "/";
        return ans;
    }
};