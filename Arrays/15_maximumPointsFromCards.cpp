#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& points, int k) {
        int n=points.size();
        int i=0, j=0;
        int size=n-k;
        long long totalSum=0;
        long long sum=0, ans=0;
        for(int &it:points) totalSum+=it;
        for(;i<size;i++){
            sum+=points[i];
        }
        ans=max(ans,totalSum-sum);
        while(i<n){
            sum-=points[j++];
            sum+=points[i++];
            ans=max(ans,totalSum-sum);
        }
        return ans;
    }
};