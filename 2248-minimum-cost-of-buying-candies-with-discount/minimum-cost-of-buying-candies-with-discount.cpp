class Solution {
public:
    int minimumCost(vector<int>& arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        int n=arr.size();
        int i=0;
        // int j+=2;
        int minCost=0;
        
        while(i<n){
            
            minCost=minCost+arr[i]+(i+1<n?arr[i+1]:0);
            i=i+3;
        }
        return minCost;
    }
};