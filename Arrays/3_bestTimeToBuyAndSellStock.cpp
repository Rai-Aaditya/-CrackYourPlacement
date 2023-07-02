// raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX, maxi=0, n=prices.size(), i=0;
        while(i<n){
            mini=min(prices[i], mini);
            maxi=max(maxi, prices[i]-mini);
            i++;
        }
        return maxi;
    }
};