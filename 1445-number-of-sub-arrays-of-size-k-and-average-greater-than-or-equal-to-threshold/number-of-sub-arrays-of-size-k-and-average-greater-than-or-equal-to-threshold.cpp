class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int left=0;
        int sum=0;
        int avg=0;
        int count=0;
        
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        
        if((sum/k)>=threshold){
            count++;
        }
        for(int i=k;i<nums.size();i++){
            sum=sum+nums[i]-nums[i-k];
            if((sum/k)>=threshold){
                count++;
            }

        }
    return count;

    }
};