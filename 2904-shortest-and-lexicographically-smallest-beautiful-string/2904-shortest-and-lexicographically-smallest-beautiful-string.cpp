class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int j = 0;
        int count = 0;
        int a = INT_MAX;
        int mn = 0;
        int mx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count++;
            }
            while (count > k) {
                if (s[j] == '1') {
                    count--;
                }
                j++;
            }
            while (count == k) {
                if (a > i - j + 1) {
                    mx = i;
                    mn = j;
                    a = i - j + 1;
                }
                else if(a == i - j + 1 && a != INT_MAX){
                    string curr = s.substr(j , i - j + 1);
                    string best = s.substr(mn , mx - mn + 1);
                    if(curr < best){
                        mn = j;
                        mx = i;
                    }
                    
                }
                if (s[j] == '1') {
                    count--;
                }
                j++;
            }
        }

        for (mn; mn <= mx; mn++) {
            if(a == INT_MAX){
                break;
            }
            ans.push_back(s[mn]);
        }

        return ans;
    }
};