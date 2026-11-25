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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        unsigned long long res=0;
        queue<pair<TreeNode*,unsigned long long >>q;
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            unsigned long long first=q.front().second;
            unsigned long long last=q.back().second;
            res=max(res,last-first+1);
            for(int i=0;i<n;i++){
                auto[curr,index]=q.front();
                q.pop();
                if(curr->left){
                    q.push({curr->left,2*index+1});
                }
                if(curr->right){
                    q.push({curr->right,2*index+2});
                }
            }
        }
        return res;
    }
};