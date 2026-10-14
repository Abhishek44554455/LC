class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){
            return result;;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ans;
            int k=q.size();
            for(int i=0;i<k;i++){
                TreeNode* curr=q.front();
                q.pop();
                ans.push_back(curr->val);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            result.push_back(ans);
        }
        reverse(result.begin(),result.end());
        return result;
    }
    
};