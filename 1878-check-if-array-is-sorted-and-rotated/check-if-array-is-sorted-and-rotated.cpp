class Solution {
public:
    void rotate(vector<int>&nums){
        int n=nums.size();
        int temp=nums[0];
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    }
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
        for(int i=0;i<n;i++){
            rotate(nums);
            if(nums==sorted){
                return true;
            }

        }
        return false;
    }
};