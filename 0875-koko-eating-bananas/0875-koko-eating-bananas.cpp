class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx = *max_element(piles.begin(), piles.end());

        int low = 1;
        int high = mx;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hours = 0;
            for (int i : piles) {
                hours += ceil((i + mid - 1) / mid);
            }
            if (hours > h) {
                low = mid + 1;
            } else if (hours <= h) {
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
};