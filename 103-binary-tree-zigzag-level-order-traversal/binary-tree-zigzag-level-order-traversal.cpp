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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*>q;
        stack<TreeNode*>st;

            bool reverse=false;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            vector<int>ans;
            for(int i=0;i<k;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(reverse){
                    st.push(curr);
                }else{
                    ans.push_back(curr->val);
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            if(reverse){
                while(!st.empty()){
                    ans.push_back(st.top()->val);
                    st.pop();
                }
            }
            reverse=!reverse;
            result.push_back(ans);

        }
    return result;
    }
};