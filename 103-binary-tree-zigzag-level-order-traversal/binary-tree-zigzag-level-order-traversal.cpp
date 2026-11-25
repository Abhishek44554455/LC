
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        stack<TreeNode*>st;
        bool reverse=false;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(reverse){
                    st.push(curr);
                }else{
                    level.push_back(curr->val);
                }
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            if(reverse){
                while(!st.empty()){
                    level.push_back(st.top()->val);
                    st.pop();
                }
            }
            reverse=!reverse;
            ans.push_back(level);
        }
        return ans;


    }
};