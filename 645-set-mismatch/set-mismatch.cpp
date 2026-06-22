class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int> ans;
        while(i<n){
            int correctIdx=nums[i]-1;
            if(i==correctIdx || nums[correctIdx]==nums[i]) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0;i<n;i++){
            if(i!=nums[i]-1){
                ans.push_back(nums[i]);
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};