class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        // Brute Force Approach

        // int n = nums.size();
        // int maxSum = 0;
        // int sum;

        // for (int i = 0; i <= n - k; i++) {
        //     unordered_set<int> st;
        //     bool isDup = false;
        //     sum = 0;

        //     for (int j = i; j <= i + k - 1; j++) {
        //         if (st.find(nums[j]) != st.end()) {
        //             isDup = true;
        //             break;
        //         }
        //         st.insert(nums[j]);
        //         sum += nums[j];
        //     }
        //     if (!isDup) {
        //         maxSum = max(maxSum, sum);
        //     }
        // }
        // return maxSum;

        // Optimal approach
       
    
        long long sum = 0, maximum = 0;
        map<int, int> mp;
        int dups = 0;

        // First window
        for (int i = 0; i < k; i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] == 2) dups++;
            sum += nums[i];
        }

        if (dups == 0) maximum = sum;

        // Sliding window
        for (int i = k; i < nums.size(); i++) {
            int add = nums[i];
            int remove = nums[i - k];

            // Add
            mp[add]++;
            if (mp[add] == 2) dups++;
            sum += add;

            // Remove
            if (mp[remove] == 2) dups--;
            mp[remove]--;
            sum -= remove;

            // Check every window
            if (dups == 0) {
                maximum = max(maximum, sum);
            }
        }

        return maximum;
    }
};
       
   