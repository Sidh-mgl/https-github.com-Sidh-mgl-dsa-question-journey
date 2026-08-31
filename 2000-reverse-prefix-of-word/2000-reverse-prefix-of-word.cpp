class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n =  word.size();
        int k = 0;
        for(int i = 0; i < word.size();i++){
            if(word[i] == ch){
                k = i;
                break;
            }
        }

        reverse(word.begin() , word.begin() + k + 1);
        return word;
    }
};