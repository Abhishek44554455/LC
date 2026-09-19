class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int noPower=arr[0];
        int power=0;
        int ans=arr[0];
        for(int i=1;i<n;i++){
            int x=arr[i];
            int prevNoPower=noPower;
            noPower=max(x,noPower+x);
            power=max(power+x,prevNoPower);

            ans=max(ans,max(power,noPower));
        }
        return ans;
    }
};