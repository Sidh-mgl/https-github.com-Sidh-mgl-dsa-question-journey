class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string firstr = "qwertyuiopQWERTYUIOP";
        string secondr = "asdfghjklASDFGHJKL";
        string thirdr = "zxcvbnmZXCVBNM";

        for (string x : words) {
            bool t = true;
            string a = x;
            for (int i = 0; i < a.size(); i++) {

                if (firstr.find(a[0]) != -1) {
                    int f = firstr.find(a[i]);
                    if (f == -1) {
                        t = false;
                        break;

                    }
                } else if (secondr.find(a[0]) != -1) {
                    int g = secondr.find(a[i]);
                    if (g == -1) {
                        t = false;
                        break;

                    }
                } else {
                    int h = thirdr.find(a[i]);
                    if (h == -1) {
                        t = false;
                        break;

                    }
                }
            }
            if(t == true){
            ans.push_back(a);

            }
        }
        return ans;
    }
};