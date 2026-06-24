class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int flips=0;
        int maxLen=INT_MIN;
        int len=INT_MIN;
        while(j<n){
            if(nums[j]==1){
                j++;
            }else{
                if(flips<1){
                    flips++;
                    j++;
                }else{
                    len=j-i-1;
                    maxLen=max(maxLen,len);
                    while(nums[i]==1) i++;
                    i++,j++;
                }
            }
        }
        len=j-i-1;
        maxLen=max(maxLen,len);
        return maxLen;
    }
};