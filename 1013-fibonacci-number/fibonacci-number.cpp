class Solution {
public:
    int solveRec(int n){
        if(n==0 || n==1){
            return n;
        }
        int ans=solveRec(n-1)+solveRec(n-2);
        return ans;
    }
    int solveMem(int n,vector<int>&dp){
         if(n==0 || n==1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=solveMem(n-1,dp)+solveMem(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
    
    // return solveRec(n); 
    //solved using dp
    //method1 memoization
    vector<int>dp(n+1,-1);
    return solveMem(n,dp);
    }
};