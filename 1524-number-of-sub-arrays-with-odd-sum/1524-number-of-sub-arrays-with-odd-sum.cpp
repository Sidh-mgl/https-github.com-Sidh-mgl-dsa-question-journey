class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long count = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum % 2 == 0) {
                count += m[1];
            } else {
                count += m[0];
            }

            m[sum % 2]++;
        }
        return count % 1000000007;
    }
};