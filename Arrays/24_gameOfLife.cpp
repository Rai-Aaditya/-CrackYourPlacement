// raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void calculateAns(vector<vector<int>> &board, vector<vector<int>> &ans, int row, int col){
        int count=0;
        int n=board.size(), m=board[0].size();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(i==0 && j==0) continue;
                int nRow=row+i;
                int nCol=col+j;
                if(nRow>=0 && nRow<n && nCol<m && nCol>=0 && board[nRow][nCol]==1){
                    count++;
                }
            }
        }
        if(board[row][col]==1){
            if(count<2 || count>3) ans[row][col]=0;
            else ans[row][col]=1;
        }
        else if(board[row][col]==0){
            if(count==3) ans[row][col]=1;
        }
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(), m=board[0].size();
        vector<vector<int>> ans(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                calculateAns(board,ans,i,j);
            }
        }
        board=ans;
    }
};