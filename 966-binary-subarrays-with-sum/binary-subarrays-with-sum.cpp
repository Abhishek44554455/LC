class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int result=0;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                result+=mp[sum-k];
            }
            mp[sum]++;
        }
        return result;
    }
};