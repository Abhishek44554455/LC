class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0;
        for(int num:nums){
            result^=num;
        }
        for(int i=1;i<=nums.size();i++){
            result^=i;
        }
        return result;
    }
};