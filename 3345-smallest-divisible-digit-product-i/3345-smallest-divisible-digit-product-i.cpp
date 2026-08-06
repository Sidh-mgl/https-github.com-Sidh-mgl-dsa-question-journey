class Solution {
public:
    int smallestNumber(int n, int t) {
        int k = n;
        int digit = 1;
        
        while(n != 0){
            digit *= n % 10;

            n /= 10;
        }
        int x;

        if(digit % t == 0){
            x = k;
        }
        else{
           x = smallestNumber(k + 1 , t);
        }


        return x;
    }
};