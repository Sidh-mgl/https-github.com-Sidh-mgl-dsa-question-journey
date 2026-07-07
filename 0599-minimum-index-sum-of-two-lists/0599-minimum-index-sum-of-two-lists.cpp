class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {
        vector<string> ans;
        unordered_map<string, int> m;
        for (int i = 0; i < list1.size(); i++) {
            m[list1[i]] = i;
        }
        int mn = INT_MAX;
        for (int j = 0; j < list2.size(); j++) {
            int sum = 0;
            if (m.find(list2[j]) != m.end()) {
                sum = m[list2[j]] + j;
                if (sum < mn) {
                    ans.clear();
                    ans.push_back(list2[j]);
                    mn = sum;
                } else if (mn == sum) {
                    ans.push_back(list2[j]);
                }
            }
        }

        return ans;
    }
};