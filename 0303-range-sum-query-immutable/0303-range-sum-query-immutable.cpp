class NumArray {
public:
    vector<int>& prefix;

    NumArray(vector<int>& nums) : prefix(nums) {
        prefix = nums;
        for(int i = 1; i < prefix.size();i++){
            prefix[i] += prefix[i - 1];
        }
    }
    
    int sumRange(int left, int right) {
        int ans;
        if(left == 0){
        ans = prefix[right];
        }
        else{
            ans = prefix[right] - prefix[left - 1];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */