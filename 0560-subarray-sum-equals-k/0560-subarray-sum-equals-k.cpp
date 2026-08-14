class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        int sum = 0;
        int r = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            r = sum - k;
            count += m[r];
            m[sum]++;
        }
        return count;
    }
};
