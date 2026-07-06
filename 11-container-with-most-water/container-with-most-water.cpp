class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int area=0;
        while(i<j){
            area=max((j-i)*min(nums[i],nums[j]),area);
            if(nums[i]<nums[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
};