class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int start=0;
        int end=1;
        int count=0;
        while(start<nums.size()-1){
            if(end>=nums.size()){
                start++;
                end=start+1;
                continue;
            }
           if(nums[start] + nums[end] < target){
                count++;
           }
           end++;
               
            
        }
        return count;
        
    }
};