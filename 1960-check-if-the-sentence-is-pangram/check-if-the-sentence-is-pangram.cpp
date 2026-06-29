class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>hash(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
            hash[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i]==0){
                return false;
            }
        }
        return true;
    }
};