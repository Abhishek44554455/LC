class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=nums.size()-1;
        int k=0;
        while(k<=j){
            if(nums[k]==1){
                k++;
            }else if(nums[k]==2){
                swap(nums[k],nums[j]);
                j--;
            }else{
                swap(nums[k],nums[i]);
                i++,k++;
            }
        }
    }
};