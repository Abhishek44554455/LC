class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        string ans;
        while(ss>>word){
            reverse(word.begin(),word.end());
            words.push_back(word);
        }
        for(string word:words){
            ans=ans+word+" ";
        }
        ans.pop_back();
        return ans;

    }
};