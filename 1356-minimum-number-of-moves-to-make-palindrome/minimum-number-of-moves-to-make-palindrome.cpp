class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        int moves=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                int k=j;
                while(i<k && s[i]!=s[k]){
                    k--;
                }
                if(k==i){
                    swap(s[i],s[i+1]);
                    moves++;
                }else{
                    while(k<j){
                        swap(s[k],s[k+1]);
                        moves++;
                        k++;
                    }
                i++;
                j--;
                }
            }
        }
        return moves;
    }
};