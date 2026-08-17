class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int j = 0;
        int mx = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                count++;
            }

            while (count > k) {
                if (nums[j] % 2 != 0) {
                    count--;
                }
                j++;
            }
            mx += i - j + 1;
        }
        return mx;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};