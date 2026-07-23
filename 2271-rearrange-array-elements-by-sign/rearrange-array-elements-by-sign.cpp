class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int k=pos.size();
        for(int i=0;i<k;i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            
        }

    return ans;

    }
};