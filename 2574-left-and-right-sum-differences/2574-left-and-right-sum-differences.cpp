class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> l(n);
        vector<int> r(n);

        l[0] = r[n - 1] = 0;

        for (int i = 1; i < n; i++) {
            l[i] = l[i - 1] + nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            r[i] = r[i + 1] + nums[i + 1];
        }
        int i = 0;
        while (i != n) {
            ans[i] = abs(l[i] - r[i]);
            i++;
        }
        return ans;
    }
};