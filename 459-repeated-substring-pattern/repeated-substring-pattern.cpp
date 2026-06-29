class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int flag=0;
        for(int l=n/2;l>0;l--){
            if(n%l==0){
                int times=n/l;
                string pattern=s.substr(0,l);
                string newStr="";
                for(int i=0;i<times;i++){
                   newStr+=pattern;
                }
                if(newStr==s){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};