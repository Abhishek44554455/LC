class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int mini=INT_MAX;
        int sum=0;
        int i=0,j=0;
        while(j<arr.size()){
            sum+=arr[j];
            while(sum>=target){
                mini=min(mini,j-i+1);
                sum=sum-arr[i];
                i++;
            }
            j++;
        }
        return mini==INT_MAX?0:mini;
    }
};