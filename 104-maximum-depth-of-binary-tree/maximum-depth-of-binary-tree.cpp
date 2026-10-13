
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        // int leftSubtree=1+maxDepth(root->left);
        // int rightSubtree=1+maxDepth(root->right);
        // return max(leftSubtree,rightSubtree);
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};