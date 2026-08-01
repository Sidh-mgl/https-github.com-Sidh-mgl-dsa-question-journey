class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        unordered_map<char, int> m;
        int j = 0;
        int mx = 0;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
            if (m[s[i]] > 1) {
                while (m[s[i]] > 1) {
                    m[s[j]]--;
                    count--;
                    j++;
                }
            }
            
            count++;
            mx = max(mx, count);
        }

        return mx;
    }
};