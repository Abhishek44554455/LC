/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        vector<int> ans;
        ll res=0;
        queue<pair<TreeNode*,ll>>q;
        if (root == NULL) {
            return 0;
        }
        
        q.push({root,0});
        while (!q.empty()) {
            int count = q.size();
            ll first=q.front().second;
            ll last=q.back().second;
            res=max(res,last-first+1);
            for (int i = 0; i < count; i++) {
                auto[temp,index] = q.front();
                q.pop();
                // ans.push_back(temp->val);
                if (temp->left != NULL) {
                    q.push({temp->left,2*index+1});
                }
                if (temp->right != NULL) {
                    q.push({temp->right,2*index+2});
                }
            }
            // result.push_back(ans);
        }
        return res;
    }
};