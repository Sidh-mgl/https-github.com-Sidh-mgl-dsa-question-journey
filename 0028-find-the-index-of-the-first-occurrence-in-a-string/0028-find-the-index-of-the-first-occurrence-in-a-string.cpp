class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m > n) {
            return -1;
        }
        int j = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = i;
            while (j < needle.size() && ans < n && haystack[ans] == needle[j]) {
                ans++;
                j++;
            }
            if (j == needle.size()) {
                return i;
            } else {
                j = 0;
            }
        }
        
        return -1;;
    }
};