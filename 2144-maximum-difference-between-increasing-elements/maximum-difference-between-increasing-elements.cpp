class Solution {
public:
    int maximumDifference(vector<int>& arr) {
        int n=arr.size();
        int minSoFar=arr[0];
        int ans=INT_MIN;
        bool found =false;
        for(int i=1;i<n;i++){
            if(arr[i]>minSoFar){
                found=true;
            ans=max(ans,arr[i]-minSoFar);
            }
            minSoFar=min(minSoFar,arr[i]);
        }
        if(!found){
            return -1;
        }
        return ans;
    }
};