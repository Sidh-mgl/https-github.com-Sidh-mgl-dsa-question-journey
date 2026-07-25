class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        unordered_map<int , int> m;

        for(int x : nums){
            m[x]++;
        }
        for(auto p : m){
            if(p.second > 1){
                ans = true;
            }
        }
        return ans;
    }
};