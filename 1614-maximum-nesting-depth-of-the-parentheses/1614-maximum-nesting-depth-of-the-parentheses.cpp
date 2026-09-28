class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count = 0;
        int mx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                count++;
            }
            if (s[i] == ')') {
                count--;
            }
            mx = max(mx, count);
        }

        return mx;
    }
};