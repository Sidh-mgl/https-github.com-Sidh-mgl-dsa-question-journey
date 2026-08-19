class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count =0;
        unordered_map<int , int> m;
        m[0] = 1;
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
            int r = sum - goal;
            count += m[r];
            m[sum]++;
        }
        return count;
    }
};