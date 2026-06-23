class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& grumpy, int k) {
        int n=arr.size();
        int maxLoss=INT_MIN;
        int previousLoss;
        //calculate the less satisfaction window;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1){
                previousLoss+=arr[i];
            }
        }
        maxLoss=max(maxLoss,previousLoss);
        int maxIdx=0;
        int i=1;
        int j=k;
        while(j<n){
            int currLoss=previousLoss;
            if(grumpy[j]==1) currLoss+=arr[j];
            if(grumpy[i-1]==1) currLoss-=arr[i-1];
            if(maxLoss<currLoss){
                maxLoss=currLoss;
                maxIdx=i;
            }
            previousLoss=currLoss;
            i++,j++;
            }
        //fill the 0s in the grumpy windows
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i]=0;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum+=arr[i];
            }
        }
        return sum;

        
    }
};