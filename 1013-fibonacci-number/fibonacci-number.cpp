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
        // if ans already exist return ans
        if(dp[n]!=-1){
            return dp[n];
        }
        // store dp array and return 
        dp[n]=solveMem(n-1,dp)+solveMem(n-2,dp);
        return dp[n];
    }
    int solveTab(int n){
        // create a dp array
        vector<int>dp(n+2,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int fib(int n) {
    
    // return solveRec(n); 
    //solved using dp
    //method1 memoization
    // step-1-> find type of dp
    // step-2-> crete a dp array and pass dp array
    // vector<int>dp(n+1,-1);
    // return solveMem(n,dp);
    //Method-2->Tabulation
    return solveTab(n);
    }
};