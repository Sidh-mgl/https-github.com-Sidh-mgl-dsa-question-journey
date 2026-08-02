class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int j = 0;
        int count = 0;
        int mx = 0;
        unordered_map<int, int> m;

        for (int i = 0; i < fruits.size(); i++) {
            count++;
            m[fruits[i]]++;
            while (m.size() > 2) {
                m[fruits[j]]--;
                if (m[fruits[j]] == 0) {
                    m.erase(fruits[j]);
                }
                count--;
                j++;
            }
            if (m.size() >= 1) {
                mx = max(mx, count);
            }
        }
        return mx;
    }
};