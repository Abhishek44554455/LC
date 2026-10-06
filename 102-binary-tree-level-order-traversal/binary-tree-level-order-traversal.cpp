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
#define pb push_back
#define Node TreeNode
class Solution {
public:
    void level(TreeNode* root,vector<vector<int>>& result) {
        vector<int>ans;
        if (root == NULL) {
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int>ans;
            int count = q.size();
            for (int i = 0; i < count; i++) {
                Node* temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                if (temp->left != NULL) {
                    q.push(temp->left);
                }
                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
            result.push_back(ans);
            
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        level(root,ans);
        return ans;

    }
};