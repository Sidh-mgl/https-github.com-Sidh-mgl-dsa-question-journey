class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0;
        int count = 0;
        int cz = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                cz++;
            }
            while (cz > k) {
                if (nums[j] == 0) {
                    cz--;
                }
                j++;
            }

            count = max(count, i - j + 1);
        }

        return count;
    }
};