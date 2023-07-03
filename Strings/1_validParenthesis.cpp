#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else if(s[i]==')') 
            {
                if(st.empty()) return false;
                if(st.top()=='(') st.pop();
                else return false;
            }
            else if(s[i]==']') 
            {
                if(st.empty()) return false;
                if(st.top()=='[') st.pop();
                else return false;
            }
            else if(s[i]=='}') 
            {
                if(st.empty()) return false;
                if(st.top()=='{') st.pop();
                else return false;
            }
            i++;
        }
        if(st.empty())
        return true;
        return false;
    }
};