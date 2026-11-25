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
    int height(TreeNode* root){
        if(root==NULL) return -1;
        int left=height(root->left);
        int right=height(root->right);
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        int lh=height(root->left);
        int rh=height(root->right);
        return (abs(rh-lh)<=1 && isBalanced(root->left) && isBalanced(root->right));
    }
};