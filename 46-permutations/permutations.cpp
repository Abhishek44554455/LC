class Solution {
    public:
    void recurPermut(vector<int> &ds,vector<int> &nums,int freq[],vector<vector<int>>&ans){
        for(int i=0;i<nums.size();i++){
            if(ds.size()==nums.size()){
                ans.push_back(ds);
                return ;
            }
            if(freq[i]==0){
                ds.push_back(nums[i]);
                freq[i]=1;
                recurPermut(ds,nums,freq,ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
            recurPermut(ds,nums,freq,ans);
        }
        return ans;
    }
};