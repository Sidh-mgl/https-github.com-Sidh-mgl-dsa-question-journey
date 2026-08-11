class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans;
        int sum = nums[0];
        unordered_map<int, int> m;

        for (int i : nums) {
            m[i]++;
        }
        for (int i = 1; i < nums.size(); i++) {

            if (i > 0 && nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else{
                break;
            }
        }
        while (m[sum] != 0) {
            sum += 1;
        }
        ans = sum;

        return ans;
    }
};