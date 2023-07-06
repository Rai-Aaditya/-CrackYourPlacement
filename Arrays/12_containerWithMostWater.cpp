#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int low=0, high=height.size()-1;
        while(low<high){
            int length=high-low;
            int width=min(height[low],height[high]);
            ans=max(ans,length*width);
            if(height[low]<=height[high]) low++;
            else high--;
        }
        return ans;
    }
};