class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        int i = 0;
        int j = s.size() - 1;
        int count = 0;

        while (i < s.size()) {
            if (s[i] == '1') {
                count++;
            }
            if (s[i] == '0') {
                ans += count;
            }
            i++;
        }
        return ans;
    }
};