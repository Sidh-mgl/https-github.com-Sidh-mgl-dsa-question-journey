class Solution {
public:
    vector<int> twoSum(vector<int>& nu, int target) {
        vector<int> ans;
        int i = 0;
        int j = nu.size() - 1;
        while (i < j) {
            int sum = nu[i] + nu[j];
            if (sum == target) {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                break;
            } else if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            }
          
        }
        return ans;
    }
};