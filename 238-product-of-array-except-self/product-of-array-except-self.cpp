class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        vector<int> ans(n);
        int p=1;
        for(int i=0;i<n;i++){
            pre[i]=p;
            p*=nums[i];
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            suf[i]=p;
            p*=nums[i];
        }
        for(int i=0;i<n;i++){
            ans[i]=suf[i]*pre[i];
        }
        return ans;
    }
};