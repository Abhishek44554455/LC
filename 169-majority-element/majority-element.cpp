class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:nums){
            if(mp[x]>mx){
                ans=x;
                mx=mp[x];

            }
        }
          return ans;
        }
     
    
};