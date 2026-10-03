class Solution {
public:
    int solve(vector<int>&nums,int size,int index,vector<int>&t){
        if(index>=size) {
            return 0;
        }
        if(t[index]!=-1){
            return t[index];
        }
        int option1=nums[index]+solve(nums,size,index+2,t);
        int option2=0+solve(nums,size,index+1,t);
        int ans=max(option1,option2);
        return t[index]= ans;

    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        vector<int>t(size,-1);
        int ans=solve(nums,size,0,t);
        return ans;
    }
};