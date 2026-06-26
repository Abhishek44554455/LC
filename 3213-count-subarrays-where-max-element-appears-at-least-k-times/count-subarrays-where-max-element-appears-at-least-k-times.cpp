class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = INT_MIN;
        int count = 0;
        long long result = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
        }
        long long i = 0;
        long long j = 0;
        while (j < n) {
            if (nums[j] == mx) {
                count++;
                
            }
            while (count >= k) {
                result += (n - j);
                if (nums[i] == mx) {
                    count--;
                    
                }
                i++;
            }

            j++;
        }
        return result;
    }
};