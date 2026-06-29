class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(mp[ch]==0){
                return false;
                break;
            }
        }
        return true;
    }
};