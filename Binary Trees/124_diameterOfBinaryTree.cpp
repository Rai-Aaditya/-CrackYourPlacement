//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int depth=0;
        maxDepth(root, depth);
        return depth;
    }
    int maxDepth(TreeNode *root, int &maxi){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(!root) return 0;
        int left=maxDepth(root->left,maxi);
        int right=maxDepth(root->right,maxi);
        maxi=max(maxi,left+right);
        return 1+max(left,right);
    }
};