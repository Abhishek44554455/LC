class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        int sum=0;
        int mx=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            mx=max(mx,sum);
        }
        return mx;
    }
};