class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        if (n == 1) return nums[0];

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if(mid == 0 && nums[mid] != nums[mid + 1]){
                return nums[mid];
            }
            if(mid == n - 1 && nums[mid] != nums[mid - 1]){
                return nums[mid];
            }

            if (mid % 2 != 0) {
                if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                    return nums[mid];
                }
                if (nums[mid] == nums[mid - 1]) {
                    low = mid + 1;
                }
                if (nums[mid + 1] == nums[mid]) {
                    high = mid - 1;
                }
            }
            if(mid % 2 == 0){
                if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                    return nums[mid];
                }
                if (nums[mid] == nums[mid - 1]) {
                    high = mid - 1;

                }
                if (nums[mid] == nums[mid + 1]) {
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
};