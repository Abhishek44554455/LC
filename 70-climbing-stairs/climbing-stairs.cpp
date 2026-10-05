class Solution {
public:
int solveMem(int n,vector<int>&dp){
         if(n==1 || n==2){
            return n;
        }
        // if ans already exist return ans
        if(dp[n]!=-1){
            return dp[n];
        }
        // store dp array and return 
        dp[n]=solveMem(n-1,dp)+solveMem(n-2,dp);
        return dp[n];
    }
    int solve(int n){
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        // return solveMem(n,dp);
        return solve(n);
    }
};