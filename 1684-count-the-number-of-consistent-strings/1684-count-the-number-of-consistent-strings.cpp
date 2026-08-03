class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_map<char, int> m;
        bool t = true;
        for (char a : allowed) {
            m[a]++;
        }

        for (string a : words) {
            t = true;
            for (char b : a) {
                if (m.find(b) == m.end()) {
                    t = false;
                    break;
                }
            }
            if (t) {
                count++;
            }
        }

        return count;
    }
};