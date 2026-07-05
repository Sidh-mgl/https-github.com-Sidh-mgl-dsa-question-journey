class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char , int> m;
        int count = 0;
        for(char x : stones){
            m[x]++;
        }
        for(char x : jewels){
            count += m[x];
        }
        return count;
    }
};