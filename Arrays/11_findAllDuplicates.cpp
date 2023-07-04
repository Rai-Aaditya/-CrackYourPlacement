#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        if(arr.empty()) return {};
        int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0){
                ans.push_back(abs(arr[i]));
            }
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        return ans;
    }
};