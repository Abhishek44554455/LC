class Solution {
public:
    int  vowel(char ch) {
        bool flag = false;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            flag = true;
        }
        return (flag==true?1:0);
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = 0;
        int count = 0;
        for (int i = 0; i < k; i++) {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        ans = count;
        for (int i = k; i < n; i++) {
            char ch = s[i - k];
            char chi = s[i];
            count = count + vowel(chi) - vowel(ch);
            ans=max(ans,count);
        }
        return ans;
    }
};