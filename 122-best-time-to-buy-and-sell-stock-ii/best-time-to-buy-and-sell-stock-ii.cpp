class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int minSoFar=arr[0];
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>minSoFar){
                ans=ans+(arr[i]-minSoFar);
            }
            minSoFar=arr[i];
        }
        return ans;
    }
};