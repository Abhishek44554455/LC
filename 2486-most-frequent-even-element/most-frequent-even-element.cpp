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
        for(auto it:mp){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }else if(it.second==mx && it.first<ans){
                ans=it.first;
            }
        }
        return ans;

    }
};