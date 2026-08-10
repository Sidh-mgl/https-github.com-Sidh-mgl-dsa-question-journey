class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int sum = 0;
        for(int i : nums){
            sum += i;
        }
        for(int i = 0; i < nums.size();i++){
            if(i > 0){
            l += nums[i - 1];
            }
            r = sum - nums[i] - l;
            if(l == r){
                return i;
            }
        }
        return -1;
    }
};