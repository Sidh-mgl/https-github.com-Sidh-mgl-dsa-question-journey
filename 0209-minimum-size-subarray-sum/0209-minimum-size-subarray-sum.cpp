class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int sum = 0;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++) {

            sum += nums[i];

            while (sum >= target) {
                mn = min(mn, i - j + 1);

                sum -= nums[j];
                j++;
            }
        }
        if (mn == INT_MAX) {
            mn = 0;
        }

        return mn;
    }
};