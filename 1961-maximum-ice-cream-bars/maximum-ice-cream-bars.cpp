class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int left=0;
        int sum=0;
        int count=0;
        vector<int>pre(n);
        for(int right=0;right<n;right++){
            if(sum + costs[right]<=coins){
                sum+=costs[right];
                count++;
            }
        }
        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
        }
        if(pre[n-1]<coins){
            return count;
        }else{
            return 0;
        }
    }
};