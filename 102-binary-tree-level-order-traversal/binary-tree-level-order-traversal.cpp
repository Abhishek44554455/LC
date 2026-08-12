
class Solution {
public:
    void level(TreeNode* root,vector<vector<int>>&ans){
        queue<TreeNode*>q;
        if(root==NULL) return ;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode* temp=q.front();
            q.pop();
            level.push_back(temp->val);
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        ans.push_back(level);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        level(root,ans);
        return ans;
    }
};