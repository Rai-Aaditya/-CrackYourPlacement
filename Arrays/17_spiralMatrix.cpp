//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int R = matrix.size();
        int C = matrix[0].size();
        int top = 0, left = 0, bottom = R-1, right = C-1;
        while(top<=bottom && left<=right){
            for(int col=left;col<=right;col++){
                ans.push_back(matrix[top][col]);
            }
            top++;
            for(int row=top;row<=bottom;row++){
                ans.push_back(matrix[row][right]);
            }
            right--;
            if(top<=bottom){
            for(int col=right;col>=left;col--){
                ans.push_back(matrix[bottom][col]);
            }
            bottom--;
            }
            if(left<=right){
            for(int row=bottom;row>=top;row--){
                ans.push_back(matrix[row][left]);
            }
            left++;
            }
        }
        return ans;
    }
};