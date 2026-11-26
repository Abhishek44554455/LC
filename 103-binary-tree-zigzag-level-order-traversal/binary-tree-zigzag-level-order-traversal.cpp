
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
                TreeNode* node=q.front();
                q.pop();
                if(reverse){
                    st.push(node);
                }else{
                level.push_back(node->val);
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
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