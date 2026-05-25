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
    int check(TreeNode* root){
        if(!root) return 0;
        return 1+max(check(root->left),check(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            int lH=check(node->left);
            int rH=check(node->right);
            if(abs(lH-rH)>1) return false;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        return true;
    }
};
