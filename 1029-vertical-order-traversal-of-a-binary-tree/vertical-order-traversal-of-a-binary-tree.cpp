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
    vector<vector<int>> solve(TreeNode* root) {
        if (root == NULL) return {};

        // column -> row -> nodes
        map<int, map<int, vector<int>>> mp;

        queue<pair<TreeNode*, pair<int, int>>> q;

        // node, {row, column}
        q.push({root, {0, 0}});

        while (!q.empty()) {

            auto [curr, pos] = q.front();
            q.pop();

            int row = pos.first;
            int col = pos.second;

            mp[col][row].push_back(curr->val);

            if (curr->left) {
                q.push({curr->left, {row + 1, col - 1}});
            }

            if (curr->right) {
                q.push({curr->right, {row + 1, col + 1}});
            }
        }

        vector<vector<int>> result;

        for (auto &col : mp) {

            vector<int> temp;

            for (auto &row : col.second) {

                // Same row + same column
                sort(row.second.begin(), row.second.end());

                for (int value : row.second) {
                    temp.push_back(value);
                }
            }

            result.push_back(temp);
        }

        return result;

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        return solve(root);
    }
};