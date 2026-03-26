class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>f;
        unordered_map<char,int>t;
        int ans=INT_MAX;
        for(int i=0;i<target.size();i++){
            t[target[i]]++;
        }
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
              
        }
        for(auto it:t){
            char ch=it.first;
            char required=it.second;
            char available=f[ch];
            ans=min(ans,available/required);
        }
        return ans;
    }

};