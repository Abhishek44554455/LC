class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        vector<int>hash(26,0);
        for(int i=0;i<n;i++){
            char ch=s[i];
            hash[ch-'a']++;
        }
        int maxFreq=0;
        int letter=0;
        for(int i=0;i<26;i++){
            if(hash[i]>maxFreq){
                maxFreq=hash[i];
                letter=i;
            }
        }
        if(maxFreq>(n+1)/2){
            return "";
        }
        string res(s.length(),' ');
        int idx=0;
        while(hash[letter]>0){
            res[idx]=char(letter+'a');
            hash[letter]--;
            idx+=2;
        }
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                if(idx>=res.length()){
                    idx=1;
                }
                res[idx]=char(i+'a');
                hash[i]--;
                idx+=2;
            }
        }
        return res;
        
    }
};