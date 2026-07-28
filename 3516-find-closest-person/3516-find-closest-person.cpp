class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans = 0;
        if (abs(x - z) > abs(y - z)) {
            ans = 2;
        } else if (abs(x - z) == abs(y - z)) {
            ans = 0;
        } else {
            ans = 1;
        }
        return ans;
    }
};