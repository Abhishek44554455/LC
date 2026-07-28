class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = (n + 1) / 2;
        reverse(nums.begin(), nums.begin() + mid);
        reverse(nums.begin() + mid, nums.end());
        int i = 0;
        int j = mid;
        while (i < mid && j < n) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++, j++;
        }
        while (i < mid) {
            ans.push_back(nums[i]);
            i++;
        }
        // for(int i=0;i<n;i++){
        //     nums[i]=ans[i];
        // }
        nums = ans;
    }
};