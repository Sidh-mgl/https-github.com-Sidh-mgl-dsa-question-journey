class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int , int> m;
        for(int x : nums){
            m[x]++;
        }
        int i = 1;
        while(m.count(k * i)){
            i++;
        }
        return k * i;
    }
};