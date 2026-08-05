class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int j = 0;
        unordered_map<int , int> m;
        int ans = 0;

        for(int i = 0;i < nums.size();i++){
            m[nums[i]]++;

            while(m[nums[i]] > k){
                m[nums[j]]--;
                j++;
            }

            ans = max(ans , i - j + 1);
        }

        return ans;
    }
};