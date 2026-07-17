class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        int mx = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (abs(i - j) + 1 > k) {
                sum -= nums[j];
                j++;
            }
            if (abs(i - j) + 1 == k) {
            mx = max(mx, sum);
            }
        }

        return 1.0 * mx / k;
    }
};