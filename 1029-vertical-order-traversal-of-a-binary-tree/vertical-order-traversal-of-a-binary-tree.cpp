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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return {};
        map<int,map<int,vector<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto [curr,pos]=q.front();
            q.pop();
            int row=pos.first;
            int column=pos.second;
            mp[column][row].push_back(curr->val);
            if(curr->left){
                q.push({curr->left,{row+1,column-1}});
            }
            if(curr->right){
                q.push({curr->right,{row+1,column+1}});
            }
        }
        for(auto& col:mp){
            vector<int>temp;
            for(auto &row:col.second){
                sort(row.second.begin(),row.second.end());
                for(int value:row.second){
                    temp.push_back(value);
                }
            }
            ans.push_back(temp);

        }
        return ans;
    }
};