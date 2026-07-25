class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans = 0;
        string s = to_string(num);
        int j = 0;
        string n;
        for(int i = 0;i < s.size();i++){
            n.push_back(s[i]);

            if(abs(i - j) + 1 > k){
                n.erase(0 , 1);
                j++;
            }

            if(abs(i - j) + 1 == k){
                if(stoi(n) != 0 && num % stoi(n) == 0){
                    ans++;
                }
            }

        }
        return ans;
    }
};