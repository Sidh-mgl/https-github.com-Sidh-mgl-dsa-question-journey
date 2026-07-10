class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans = {-1 , -1};
        int i = 0;
        int j = nums.size() - 1;
        while(i <= j){
            if(nums[i] == target && nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                break;
            }
            if(nums[i] < target){
                i++;
            }
            if(nums[j] > target){
                j--;
            }
        }
        return ans;
    }
};