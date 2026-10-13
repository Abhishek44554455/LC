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
    bool solve(TreeNode* p ,TreeNode* q){
        if(p==NULL && q==NULL) return true;
        else if(p==NULL || q==NULL) return false;
        else if(p->val != q->val) return false;
        bool lst=solve(p->left,q->right);
        bool rst=solve(p->right,q->left);
        return (lst && rst);
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left ==NULL && root->right==NULL) return true;
        return solve(root->left,root->right);
    }
};