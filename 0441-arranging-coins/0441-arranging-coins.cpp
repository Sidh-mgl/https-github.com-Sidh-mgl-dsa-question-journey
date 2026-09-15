class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1;
        int high = n;
        int ans;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long csum = 1LL * mid * (mid + 1) / 2;

            if (csum <= n) {
                ans = mid;
                low = mid + 1;
            } else if (csum > n) {
                high = mid - 1;
            }
        }

        return ans;
    }
};