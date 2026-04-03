class Solution {
public:
    int minInsertions(string s) {
        int open = 0;       // unmatched '('
        int insertions = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } else {
                // Check if it's a pair "))"
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++; // consume next ')'
                } else {
                    insertions++; // need one more ')'
                }

                if (open > 0) {
                    open--;
                } else {
                    insertions++; // need one '('
                }
            }
        }

        // each remaining '(' needs 2 ')'
        return insertions + open * 2;
    }
};