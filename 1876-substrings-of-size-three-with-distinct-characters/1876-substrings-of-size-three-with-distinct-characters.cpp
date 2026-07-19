class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        int j = 0;
        for(int i = 0;i < s.size();i++){
            if(i - j > 2){
                j++;
            }

            if(i - j == 2){
                int x = j;
                    if(s[x] != s[x + 1] && s[x + 1] != s[i]){
                        if(s[x] != s[i]){
                            count++;
                        }
                    }
                   
            }
        }

        return count;
    }
};