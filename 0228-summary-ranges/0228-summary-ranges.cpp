class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i+1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
                    k = i;
                while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
                    i++;
                }
                ans.push_back( to_string(nums[k]) + "->" + to_string(nums[i]));
            }
            else{
                ans.push_back(to_string(nums[i]));
            }
        }
        return ans;
    }
};