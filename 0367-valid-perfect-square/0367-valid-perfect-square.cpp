class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int low = 1;
        int high = num;

        while(low <= high){
            int mid = low + (high - low)/2;
            long long sqr = 1LL * mid * mid;
            if(sqr == num){
                return true;
            }
            else if(sqr > num){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }


        return false;
    }
};