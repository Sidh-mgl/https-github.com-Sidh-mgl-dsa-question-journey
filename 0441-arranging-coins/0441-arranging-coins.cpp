class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        int i = 1;
        while(n >= i){
            n -= i;
            i++;
        }
        return i - 1;

    }

};