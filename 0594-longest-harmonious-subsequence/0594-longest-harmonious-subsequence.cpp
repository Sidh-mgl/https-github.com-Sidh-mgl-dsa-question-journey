class Solution {
public:
    int findLHS(vector<int>& nums) {
        int count = 0;
        int j = 0;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {

            int diff = nums[i] - nums[j];
            while (diff > 1) {
                j++;
                diff = nums[i] - nums[j];
            }
            if (diff == 1) {
                count = max(count, i - j + 1);
            }
        }
        return count;
    }
};