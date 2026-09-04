class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> s(n);
        vector<int> e(n);

        int mx = INT_MIN;
        int mn = INT_MAX;
        int i = 0;
        int j = n - 1;

        for(int i = 0;i < n;i++){
            mx = max(mx , nums[i]);
            s[i] = mx;
        }
        for(int i = n - 1;i >= 0;i--){
            mn = min(mn , nums[i]);
            e[i] = mn;
        }

        for(int i = 0;i < n;i++){
            if(k >= s[i] - e[i]){
                return i;
            }
        }
        return -1;
    }
};