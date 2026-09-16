class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();

        int count = 1;
        int maxFreq = 0;
        int ans = arr[0];

        for(int i = 1; i < n; i++) {

            if(arr[i] != arr[i - 1]) {

                if(count > maxFreq) {
                    maxFreq = count;
                    ans = arr[i - 1];
                }

                count = 1;

            } else {
                count++;
            }
        }

        // Process the last group
        if(count > maxFreq) {
            maxFreq = count;
            ans = arr[n - 1];
        }

        if(4 * maxFreq > n)
            return ans;

        return -1;
    }
};