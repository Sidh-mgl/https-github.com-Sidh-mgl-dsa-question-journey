class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int j = 0;
        int count = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            if (blocks[i] == 'B') {
                count++;
            }

            if (i - j + 1 > k) {
                if (blocks[j] == 'B') {
                    count--;
                }
                j++;
            }

            if (i - j + 1 == k) {
                mx = max(mx, count);
            }
        }
        
        int ans = k - mx;
        
        return ans;
    }
};