#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool isPalindrome(string s){
        int n=s.size();
        for(int i=0, j=n-1; i<j; i++,j--){
            if(s[i]!=s[j]) {
                return false;
            }
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)) return true;
        int n=s.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                int s1=i, j1=j-1, s2=i+1, j2=j;
                while(s1<j1 && s[s1]==s[j1]) s1++,j1--;
                while(s2<j2 && s[s2]==s[j2]) s2++,j2--;
                return s1>=j1 || s2>=j2;
            }
        }
        return true;        
    }
};