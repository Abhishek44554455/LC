class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();

        vector<int> left(n, 0);
        vector<int> right(n, 0);

        // First transaction: left side
        int minSoFar = arr[0];

        for(int i = 1; i < n; i++) {
            left[i] = left[i - 1];

            if(arr[i] > minSoFar) {
                left[i] = max(left[i],
                              arr[i] - minSoFar);
            }

            minSoFar = min(minSoFar, arr[i]);
        }

        // Second transaction: right side
        int maxSoFar = arr[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1];

            if(arr[i] < maxSoFar) {
                right[i] = max(right[i],
                               maxSoFar - arr[i]);
            }

            maxSoFar = max(maxSoFar, arr[i]);
        }

        // Combine
        int best = 0;

        for(int i = 0; i < n; i++) {
            best = max(best, left[i] + right[i]);
        }

        return best;
    }
};