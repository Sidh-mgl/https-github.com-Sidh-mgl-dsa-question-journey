class Solution {
public:
    int addDigits(int num) {
        int ans;
        int sum = 0;
        if (num < 10) {
            return num;
        } else {
            while (num != 0) {
                int digit = num % 10;
                num /= 10;
                sum += digit;
            }
            if (sum < 10) {
                ans = sum;
            } else {
               ans = addDigits(sum);
            }
        }

        return ans;
    }
};