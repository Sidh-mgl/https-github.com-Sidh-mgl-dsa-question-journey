class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int j = 0;
        int mx = 0;
        unordered_map<char , int> m;
        int ans = 0;
        for(int i = 0; i < answerKey.size();i++){
            m[answerKey[i]]++;

            mx = max(m['T'] , m['F']);

            while(i - j + 1 - mx > k){
                m[answerKey[j]]--;
                j++;
            }

            ans = max(ans , i - j + 1);
        }
        return ans;
    }
};