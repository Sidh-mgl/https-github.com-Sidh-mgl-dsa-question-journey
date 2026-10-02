class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        unordered_map<char, int> m;

        for (char c : s) {
            m[c]++;
        }
        for (char c : t) {
            m[c]--;
            if (m[c] < 0) {
                ans = c;
                break;
            }
        }
        return ans;
    }
};