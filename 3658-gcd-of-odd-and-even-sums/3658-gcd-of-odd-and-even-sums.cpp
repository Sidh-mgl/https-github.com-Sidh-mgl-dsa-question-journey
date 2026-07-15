class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so = 0;
        int se = 0;
        int i = 2;
        int j = 1;

        while (n != 0) {
            se += i;
            so += j;
            i = i + 2;
            j = j + 2;
            n--;
        }

        return gcd(so, se);
    }
};