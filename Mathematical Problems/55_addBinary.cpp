//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size()) return addBinary(b,a);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int i=0, carry=0, val=0;
        string ans = "";
        int n1=a.size(), n2=b.size();
        for(i=0;i<n2;i++){
            val = ((a[i]-'0')+(b[i]-'0')+carry);
            ans+=to_string((val%2));
            carry=val/2;
        }
        for(;i<n1;i++){
            val=((a[i]-'0')+carry);
            ans+=to_string((val%2));
            carry=val/2;
        }
        if(carry){
            ans+='1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};