class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> m;
        int z = 0;
        int o = 0;
        int diff = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                z++;
            } else {
                o++;
            }
            diff = z - o;
            if (diff == 0) {
                ans = max(ans, i + 1);
                continue;
            }
            if (m.find(diff) != m.end()) {
                ans = max(ans, i - m[diff]);
            } else {
                m[diff] = i;
            }
        }

        return ans;
    }
};