class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;
        unordered_map<int , int> m;

        while(n != 0){
            int digit = n % 10;
            m[digit]++;
            n /= 10;
        }

        for(auto p : m){
            ans += p.first * p.second;
        }

        return ans;
    }
};