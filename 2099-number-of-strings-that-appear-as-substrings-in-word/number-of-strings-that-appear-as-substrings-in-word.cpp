class Solution {
public:
    bool check(string pattern ,string word){
        int m=pattern.size();
        int n=word.size();
        for(int i=0;i+m<=n;i++){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(word[i+j]!=pattern[j]){
                    flag=false;
                    break;
                }
            }
                if(flag){
                    return true;
                }
            }
            return false;
        }
    
    int numOfStrings(vector<string>& patterns, string word) {
        int m=patterns.size();
        int res=0;
        for(int i=0;i<m;i++){
            res+=check(patterns[i],word);
        }
        return res;
    }
};