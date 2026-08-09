class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool ans = false;
        int j = 0;
        unordered_map<int , int> m;
        for(int i = 0;i< nums.size();i++){
            m[nums[i]]++;
            if(abs(i - j) > k){
                m[nums[j]]--;
                j++;
            }

            if(abs(i - j) <= k){
                if(m[nums[i]] > 1){
                    ans = true;
                }
            }
        }
        return ans;
    }
};