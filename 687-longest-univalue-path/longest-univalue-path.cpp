
class Solution {
public:
    int ans=0;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        // int left=0;
        if(root->left!=NULL && root->left->val==root->val){
            left++;
        }else{
            left=0;
        }
        // int right=0;
        if(root->right!=NULL && root->right->val==root->val){
            right++;
        }else{
            right=0;
        }
        ans=max(ans,left+right);
        return max(left,right);
    }
    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        solve(root);
        return ans;
    }
};