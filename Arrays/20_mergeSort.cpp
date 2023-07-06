// raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> st;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                st.push_back(nums1[i++]);
            }
            else if(nums1[i]>nums2[j]){
                st.push_back(nums2[j++]);
            }
            else{
                st.push_back(nums1[i]);
                st.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        while(i<m) st.push_back(nums1[i++]);
        while(j<n) st.push_back(nums2[j++]);
        vector<int>::iterator it;
        nums1.clear();
        for(it=st.begin();it!=st.end();it++){
            nums1.push_back(*it);
        }
        return;
    }
};