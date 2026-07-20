class Solution {
public:
    int maxVowels(string s, int k) {
        int mx = INT_MIN;
        int j = 0;

        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count++;
            }
            if (i - j + 1 > k) {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                    s[j] == 'u') {
                    count--;
                }
                j++;
            }

            if (i - j + 1 == k) {
                mx = max(count, mx);
            }

            
        }
        return mx;
    }
};