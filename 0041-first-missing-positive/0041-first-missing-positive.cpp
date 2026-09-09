class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int ans = 0;

        for(int i : nums){
            s.insert(i);
        }

        for(int i = 1;i <= nums.size();i++){
            if(s.find(i) == s.end()){
                ans = i;
                break;
            }
        }

        if(ans == 0){
            ans = nums.size() + 1;
        }
        return ans;
    }
};