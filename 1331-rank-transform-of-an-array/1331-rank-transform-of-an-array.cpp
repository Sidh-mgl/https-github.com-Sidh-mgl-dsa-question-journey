class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int, int> m;
        vector<int> a;
        for (int i : arr) {
            a.push_back(i);
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < a.size(); i++) {
            if (m.find(a[i]) != m.end()) {
                continue;
            } else {
                count++;
                m[a[i]] = count;
            }
        }

        for (int i : arr) {
            ans.push_back(m[i]);
        }

        return ans;
    }
};