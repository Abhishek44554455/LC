class Solution {
public:
    bool solve(vector<int>&arr,int target,int index,vector<vector<int>>&t){
        if(target==0){
            return true;
        }
        if(index==arr.size()){
            return false;
        }
        if(t[index][target]!=-1){
            return t[index][target];
        }
        if(arr[index]>target){
            return t[index][target]=solve(arr,target,index+1,t);
        }else{
            return t[index][target]= solve(arr,target-arr[index],index+1,t) || solve(arr,target,index+1,t);
        }
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>t(n+1,vector<int>(target+1,-1));
       return  solve(nums,target,0,t);
    }
};