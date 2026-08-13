class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum < 0) {
                left = (sum % k + k) % k;

            } else {
                left = sum % k;
            }
            ans += m[left];
            m[left]++;
        }
        return ans;
    }
};