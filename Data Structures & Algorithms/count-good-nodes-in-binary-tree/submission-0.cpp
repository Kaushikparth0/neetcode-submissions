/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int ans=0;
    void solve(TreeNode* root,int maxN){
        if(!root) return;
        if(root->val>=maxN) ans++;
        maxN=max(maxN,root->val);
        solve(root->left,maxN);
        solve(root->right,maxN);
    }
    int goodNodes(TreeNode* root) {
        solve(root,INT_MIN);
        return ans;
    }
};
