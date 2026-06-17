class Solution {
public:
    // string reverse(string s){
    //     long long i=0;
    //     long long j=s.size()-1;
    //     while(i<j){
    //         swap(s[i],s[j]);
    //         i++,j--;
    //     }
    //     return s;
    // }
    char processStr(string s, long long k) {
        long long len=0;
        //S-1 compute the length 
        for(char c:s){
            if(islower(c)){
                len++;
            }else if(c=='#'){
                len=len*2;
            }else if(c=='*'){
                if(len>0){
                    len--;
                }
            }
        }
        if(k>=len){
            return '.';
        }
        //S-2 traverse from backward
        for(long long i=s.size()-1;i>=0;i--){
            if(islower(s[i])){
                len--;
                if(k==len){
                    return s[i];
                }
                
            }
            else if(s[i]=='#'){
                long long half=len/2;
                k=k%half;
                len=half;
                
            }
            else if(s[i]=='*'){
                len++;
            }else if(s[i]=='%'){
                k=len-k-1;
            }
        }
        return '.';
    }
};