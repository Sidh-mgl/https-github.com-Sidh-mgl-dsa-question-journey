class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long j = 0;
        long long count =0;
        long long score = 0;
        long long sum = 0;

        for(long long i = 0;i < nums.size();i++){
            sum += nums[i];
            score = sum * (i - j + 1);
            while(score >= k){
                sum -= nums[j];
                j++;
                score = sum * (i - j + 1);
            }
            if(score < k){
                count += i - j + 1;
            }
        }

        return count;
    }
};