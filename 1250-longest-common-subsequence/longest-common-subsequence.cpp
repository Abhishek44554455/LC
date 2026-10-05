class Solution {
public:
    int solve(string text1,string text2){
        // if(text1.size()==m || text2.size()==n){
        //     return 0;
        // }
        // if(t[m][n]!=-1){
        //     return t[m][n];
        // }
        // if(text1[m]==text2[n]){
        //    return t[m][n]= 1+ solve(text1,text2,m+1,n+1,t);
        // }else{
        //  return t[m][n]=  max( solve(text1,text2,m+1,n,t) , solve(text1,text2,m,n+1,t));
        // }
       int m=text1.size();
       int n=text2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(text1[i]==text2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];

    }
    int longestCommonSubsequence(string text1, string text2) {
        
        // vector<vector<int>>t(m+1,vector<int>(n+1,-1));
        return solve(text1,text2);
    }
};