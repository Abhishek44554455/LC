class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, maxOnes = 0;
        
        for (int x : nums) {
            if (x == 1) {
                curr++;
                maxOnes = max(maxOnes, curr);
            } else {
                curr = 0;
            }
        }
        return maxOnes;
    }
};
