class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int mx=INT_MIN;
        for(int x:nums){
            if(x%2==0){
            int val=mp[x];
            if(val>mx){
                ans=x;
                mx=val;
            }else if(val==mx && x<ans){
                ans=x;
            }
            }
        }
        return ans;

    }
};