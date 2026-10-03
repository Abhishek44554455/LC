class Solution {
public:
    bool solve(vector<int>&arr,int target,int index){
        // if(target==0){
        //     return true;
        // }
        // if(index==arr.size()){
        //     return false;
        // }
        // if(t[index][target]!=-1){
        //     return t[index][target];
        // }
        // if(arr[index]>target){
        //     return t[index][target]=solve(arr,target,index+1,t);
        // }else{
        //     return t[index][target]= solve(arr,target-arr[index],index+1,t) || solve(arr,target,index+1,t);
        // }

        //tabulation
        int n=arr.size();
        vector<vector<int>>t(n+1,vector<int>(target+1,0));
        for(int i=0;i<n;i++){
            t[i][0]=1;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<=target;j++){
                if(arr[i]>j){
                     t[i][j]=t[i+1][j];
                }else{
                    t[i][j]=t[i+1][j-arr[i]] || t[i+1][j];
                }
            }
        }
        return t[0][target];


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
        
       return  solve(nums,target,0);
    }
};