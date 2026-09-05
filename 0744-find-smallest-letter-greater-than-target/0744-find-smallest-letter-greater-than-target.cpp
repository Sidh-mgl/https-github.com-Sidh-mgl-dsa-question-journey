class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        
        int mn = INT_MAX;
        for(int i = 0;i < n;i++){
            if(target < letters[i]){
                mn = min(mn , int(letters[i]));
            }
        }
        if(mn == INT_MAX){
            return letters[0];
        }

        char ans = char(mn);

        return ans;
    }
};