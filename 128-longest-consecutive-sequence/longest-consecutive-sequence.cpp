class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return {};
        }
        int mx=1;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // ans.push_back(nums[0]);
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }else{
                count=1;
            }
            mx=max(mx,count);
        }
        return mx;

    }
};