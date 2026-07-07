class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans;
        string a;
        int sum = 0;

        if (n == 0) {
            return 0;
        }
        while (n != 0) {
            int digit = n % 10;
            if (digit != 0) {
                a.push_back(digit + '0');
            }
            n = n / 10;
        }
        for (char x : a) {
            sum += x - '0';
        }
        reverse(a.begin(), a.end());
        ans = 1LL * sum * stoi(a);

        return ans;
    }
};