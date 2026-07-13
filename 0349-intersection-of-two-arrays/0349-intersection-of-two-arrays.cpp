class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m;
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            m.insert(nums1[i]);
        }
        for (int i : nums2) {
            if (m.find(i) != m.end()) {
                ans.push_back(i);
                m.erase(i);
            }
        }
        return ans;
    }
};