class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1) return s;
        string ans="";
        for(int i=1;i<n;i++){
            int high=i;
            int low=i;
            //odd length
            //keep extending untill left right met palindrome condition
            while(low >= 0 && high < n && s[low] == s[high]){
                low--;
                high++;
            }
            string palindrome=s.substr(low+1,high-low-1);
            if(palindrome.size()>ans.size()){
                ans=palindrome;
            }
            low=i-1;
            high=i;
            while(low >= 0 && high < n && s[low] == s[high]){
                low--;
                high++;
                
            }
              palindrome=s.substr(low+1,high-low-1);
            if(palindrome.size()>ans.size()){
                ans=palindrome;
            }
        }
        return ans;
    }
};