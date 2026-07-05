class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        string newStr = "";
        while (i < n) {
            char ch = chars[i];
            int count = 0;
            while (i < n && ch == chars[i]) {
                count++;
                i++;
            }
            newStr += ch;
            if (count > 1) {
                newStr += to_string(count);
            }
        }
        for (int i = 0; i < newStr.size(); i++) {
            chars[i] = newStr[i];
        }
        return newStr.size();
    }
};