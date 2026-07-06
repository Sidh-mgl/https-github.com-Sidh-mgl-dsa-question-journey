class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int count = 0;
        vector<string> code = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                               "--.",  "....", "..",   ".---", "-.-",  ".-..",
                               "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                               "...",  "-",    "..-",  "...-", ".--",  "-..-",
                               "-.--", "--.."};
        unordered_map<char, string> m;
        char first = 'a';
        for (string x : code) {
            m[first] = x;
            first++;
        }
        unordered_set<string> s;
        for (string x : words) {
            string morse = "";
            for (int i = 0; i < x.size(); i++) {
                morse += m[x[i]];
            }
            s.insert(morse);
        }

        return s.size();
    }
};