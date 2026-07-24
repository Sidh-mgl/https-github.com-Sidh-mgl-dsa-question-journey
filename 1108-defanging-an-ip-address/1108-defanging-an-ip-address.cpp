class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(char x : address){
            if(x == '.'){
                ans.append("[.]");
            }
            else{
            ans.push_back(x);
            }
        }
        return ans;
    }
};