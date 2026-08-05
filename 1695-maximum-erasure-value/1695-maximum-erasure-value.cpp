class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int j = 0;
        int sum = 0;
        unordered_map<int, int> m;
        int mx = 0;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            sum += nums[i];

            while (m[nums[i]] > 1) {
                m[nums[j]]--;
                sum -= nums[j];
                j++;
            }

            mx = max(mx, sum);
        }

        return mx;
    }
};