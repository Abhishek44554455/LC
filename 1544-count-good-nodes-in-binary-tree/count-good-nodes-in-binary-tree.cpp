
class Solution {
public:
    int solve(TreeNode* root,int maxVal){
        if(root==NULL) return 0;
        int count=0;
        if(root->val>=maxVal){
            count=1;
        }
        maxVal=max(maxVal,root->val);
        count+=solve(root->left,maxVal);
        count+=solve(root->right,maxVal);
        return count;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        return solve(root,root->val);
    }
};