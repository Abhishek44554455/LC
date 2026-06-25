class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int mx=INT_MIN;
        int ans=0;
        vector<int>result;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:nums){
            if(mp[x]>(n/3)){
                
                result.push_back(x);
                // mx=mp[x];

            }
           
           
        }
        sort(result.begin(),result.end());
        if(result.empty()){
    return {};
}
        vector<int> sol;
        sol.push_back(result[0]);
        for(int i=1;i<result.size();i++){
           
             if(result[i]==result[i-1]){
                continue;
            }
            sol.push_back(result[i]);
        }
        //  result.push_back(ans);
          return sol;
        
     
    

    }
};