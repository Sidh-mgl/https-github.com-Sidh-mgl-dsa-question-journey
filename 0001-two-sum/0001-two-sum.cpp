class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {};
        int i = 0;
        int j = nums.size() - 1;

        vector<pair<int, int>> m;

        for (int i = 0; i < nums.size(); i++) {
            m.push_back({nums[i], i});
        }

        sort(m.begin(), m.end());

        while (i <= j) {
            int sum = m[i].first + m[j].first;
            if (sum == target) {
                ans.push_back(m[i].second);
                ans.push_back(m[j].second);
                break;
            }
            if (sum > target) {
                j--;
            }
            if (sum < target) {
                i++;
            }
        }
        return ans;
    }
};