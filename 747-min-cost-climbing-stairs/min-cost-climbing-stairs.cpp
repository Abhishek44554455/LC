class Solution {
public:
    int solve(vector<int>& cost,int i,vector<int>&dp){
        int n=cost.size();
        if(i>=n) return 0;
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]= min(cost[i]+solve(cost,i+1,dp),cost[i]+solve(cost,i+2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int case1=solve(cost,0,dp);
        int case2=solve(cost,1,dp);
        return min(case1,case2);
        
    }
};