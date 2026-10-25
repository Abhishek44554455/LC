class Solution {
public:
    int calculateScore(int a, int b) {
        int num1 = 0;
        int num2 = 0;
        while (a > 0) {
            int rem = a % 2;
            if (rem == 1) {
                num1++;
            }
            a = a / 2;
        }
        while (b > 0) {
            int rem = b % 2;
            if (rem == 1) {
                num2++;
            }
            b = b / 2;
        }
        if (num1 >= num2) {
            return num1 * num2;
        }
        return num2 / num1;
    }
};