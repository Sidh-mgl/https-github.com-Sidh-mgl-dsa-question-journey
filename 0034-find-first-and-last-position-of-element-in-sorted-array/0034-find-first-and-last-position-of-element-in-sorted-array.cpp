class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1 , -1};

        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int a1 = n;
        int a2 = n;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= target){
                a1 = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        low = 0;
        high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > target){
                a2 = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        if(a1 == n || nums[a1] != target){
            return ans;
        }
        else{
            ans[0] = a1;
            ans[1] = a2 - 1;
        }
        return ans;
    }
};