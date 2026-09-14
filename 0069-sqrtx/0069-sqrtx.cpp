class Solution {
public:
    int mySqrt(int x) {
        long long ans = 0;
        if(x == 1){
            return 1;
        }

        for(int i = 0; i < x;i++){
            if((long long)i * i <= x){
                ans = i;
            }
            else{
                break;
            }
        }

        return ans;
    }
};