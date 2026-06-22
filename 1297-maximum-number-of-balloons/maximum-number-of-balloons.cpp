class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        string target="balloon";
        int ans=INT_MAX;
        unordered_map<char,int> mp;
        unordered_map<char,int> t;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }
        for(int i=0;i<target.size();i++){
            t[target[i]]++;
        }
        for(auto x:t){
            char ch=x.first;
            int required=x.second;
            int available=mp[ch];
            ans=min(ans,available/required);
        }
        return ans;
    }
};