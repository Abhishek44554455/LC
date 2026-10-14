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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>result;
        if (root == NULL) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            // vector<int>ans;
            double ans=0;
            int count = q.size();
            for (int i = 0; i < count; i++) {
                TreeNode* temp = q.front();
                q.pop();
                // ans.push_back(temp->val);
                ans+=temp->val;
                if (temp->left != NULL) {
                    q.push(temp->left);
                }
                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
            result.push_back(ans/count);
            
        }
        return result;
    }
};