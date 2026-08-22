class Solution {
public:
    bool checkDivisibility(int n) {
        bool ans = false;
        int a = n;
        int sum = 0;
        int pro = 1;

        while(a != 0){
            int b = a % 10;
            sum += b;
            pro *= b;
            a /= 10;
        }

        if(n % (sum + pro) == 0){
            ans = true;
        }

        return ans;
    }
};