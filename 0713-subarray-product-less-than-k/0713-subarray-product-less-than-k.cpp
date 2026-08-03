class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int j = 0;
        int count = 0;
        int pro = 1;

        for(int i = 0;i < nums.size();i++){
            if(k <= 1){
                return 0;
            }
            pro *= nums[i];
            
            while(pro >= k){
                pro /= nums[j];
                j++;
            }
            count += i - j + 1;
        }
        return count;
    }
};