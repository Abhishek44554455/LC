
class Solution {
public:
    vector<int>level(TreeNode* root){
        if(root==NULL){
            return {};
        }
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int maxVal=INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                maxVal=max(maxVal,curr->val);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }

            }
            ans.push_back(maxVal);
        }
        return ans;
    }
    vector<int> largestValues(TreeNode* root) {
       return level(root);
    }
};