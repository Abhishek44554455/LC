class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
       int start=0,
       end=nums.size()-1;
       vector<int>result(nums.size());
       int pos=nums.size()-1;
       while(start<=end){
        if(abs(nums[start])>abs(nums[end])){
            result[pos]=nums[start]*nums[start];
            start++;
            
        }else{
            result[pos]=nums[end]*nums[end];
            end--;
        }
        pos--;
       }
       return result;
    }
};