class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // brute force

        // map<int,int>mp;
        // int flag=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]&&(j-i)<=k){
        //             flag=1;
        //         }else{
        //             continue;
        //         }
        //     }
        // }
        // if(flag==1){
        //     return true;
        // }else{
        //     return false;
        // }

        // optimal Approach
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()&&(i-mp[nums[i]]<=k)){
                return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};