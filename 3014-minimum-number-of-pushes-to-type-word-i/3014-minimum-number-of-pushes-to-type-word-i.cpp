class Solution {
public:
    int minimumPushes(string word) {
        int x = 0;
        int value = word.size();
        if (word.size() <= 8) {
            x = word.size();
        } else if (word.size() > 8) {
            int i = 1;
            while (value > 8) {
                x += 8 * i;
                value -= 8;
                i++;
            }
            x += value * i;
        }

        return x;
    }
};