class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        int  mxlen=INT_MIN;
        for(int i=0;i<n;i++){
           
            if(nums[i]==1){
                len++;
            }else{
                len=0;
            }
             mxlen=max(mxlen,len);
        }
        return mxlen;
    }
};