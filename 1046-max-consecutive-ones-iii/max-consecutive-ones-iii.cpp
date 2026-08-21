class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int ans=0;
        int flip=0;
        while(j<n){
            if(nums[j]==1){
                j++;
            }else{
                if(flip<k){
                    flip++;
                    j++;
                }else{
                    //remove element;
                    if(nums[i]==0){
                        i++;
                        flip--;
                    }else{
                        i++;
                    }
                }
            }
        ans=max(ans,j-i);
        }
        return ans;
    }
};