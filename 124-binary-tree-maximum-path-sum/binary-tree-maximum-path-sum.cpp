
class Solution {
public:
    int maxi=INT_MIN;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int leftGain=max(0,solve(root->left));
        int rightGain=max(0,solve(root->right));
        int currentGain=root->val+leftGain+rightGain;
        maxi=max(maxi,currentGain);
        return root->val+max(leftGain,rightGain);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};