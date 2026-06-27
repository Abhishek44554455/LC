class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int count=0;
        // for(int s=0;s<n;s++){
        //     for(int e=s;e<n;e++){
        //         int sum=0;
        //         for(int i=s;i<e;i++){
        //             sum+=nums[i];
        //         }
        //         if(sum==k) count++;
        //     }
        // }
        // return count;
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
                mp[sum]++;
            
        }
        return count;
    }
};