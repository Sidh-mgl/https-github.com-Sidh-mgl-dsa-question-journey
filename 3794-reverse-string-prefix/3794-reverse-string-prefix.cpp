class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size() - k;
       reverse(s.begin() , s.end() - n); 
       return s;
    }
};