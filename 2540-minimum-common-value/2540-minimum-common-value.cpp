class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        int ans = INT_MAX;
        for(int i : nums1){
            s.insert(i);
        }
        for(int i : nums2){
            if(s.find(i) != s.end()){
                ans = min(ans , i);
            }
        }
        if(ans == INT_MAX){
            ans = -1;
        }
        return ans;
    }
};