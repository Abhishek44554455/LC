class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(!isalpha(s[start])){
                start++;
                continue;
            }
            if(!isalpha(s[end])){
                end--;
                continue;
            }
            else{
                swap(s[start],s[end]);
                start++,end--;
            }
        }
        return s;
    }
};