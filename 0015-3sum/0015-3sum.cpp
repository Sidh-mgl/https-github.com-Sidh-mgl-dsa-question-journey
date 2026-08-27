class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
    
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n - 2; i++) {
            int l = i + 1;
            int r = n - 1;
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            sum = -1 * nums[i];
            while (l < r) {

                if (nums[l] + nums[r] == sum) {

                    ans.push_back({nums[i] , nums[l] , nums[r]});
                    l++;
                    r--;
                    while (l < n && nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (r >= 0 && nums[r] == nums[r + 1]) {
                        r--;
                    }
                } else if (nums[l] + nums[r] < sum) {
                    l++;
                } else {
                    r--;
                }
            }
            
        }
        return ans;
    }
};