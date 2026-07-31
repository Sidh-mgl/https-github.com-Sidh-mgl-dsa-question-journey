class Solution {
public:
    int minimumPushes(string word) {
        int count = 0;
        int n = word.size();
        unordered_map<char, int> m;

        for (char i : word) {
            m[i]++;
        }

        vector<int> freq;

        for (auto p : m) {
            freq.push_back(p.second);
        }

        sort(freq.begin(), freq.end());

        int i = freq.size() - 1;

        int a = 0;
        
        for (i; i >= 0; i--) {
            count += freq[i] * (a / 8 + 1);
            a++;
        }

        return count;
    }
};