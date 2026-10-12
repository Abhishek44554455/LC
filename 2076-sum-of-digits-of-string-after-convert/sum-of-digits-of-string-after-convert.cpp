class Solution {
public:
    int getLucky(string s, int k) {
        // string nums = "";
        int sum=0;
        for (char ch : s) {
            int temp = ch - 'a' + 1;
            sum+=temp/10;
            sum+=temp%10;
            
        }
        // int num = stoi(nums);
        for (int i = 1; i < k; i++) {
            int newsum = 0;
            while (sum != 0) {
                int digit = sum % 10;
                newsum += digit;
                sum = sum / 10;
            }
            sum = newsum;
        }
        return sum;
    }
};