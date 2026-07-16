class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixgcd;

        int mx = INT_MIN;

        for(int i = 0;i < n;i++){
            mx = max(mx , nums[i]);

            prefixgcd.push_back(gcd(mx , nums[i]));
        }
        sort(prefixgcd.begin() , prefixgcd.end());

        int i = 0;
        int j = prefixgcd.size() - 1;
        long long sum = 0;

        while(i != j && i < j){
            sum += gcd(prefixgcd[i] , prefixgcd[j]);
            i++;
            j--;
        }

        return sum;
    }
};