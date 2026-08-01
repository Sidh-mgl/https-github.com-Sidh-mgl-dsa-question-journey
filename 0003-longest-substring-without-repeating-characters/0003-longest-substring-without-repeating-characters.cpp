class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int j = 0;
        int mx = 0;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;

            if (m[s[i]] > 1) {
                while (m[s[i]] > 1) {
                    m[s[j]]--;
                    j++;
                }
            }
            
            mx = max(mx, i - j + 1);
        }

        return mx;
    }
};