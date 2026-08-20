class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result(nums.size());
        int pos = 0;
        int neg = 1;

        for(auto it : nums){
            if(it < 0){
                result[neg] = it;
                neg = neg + 2;
            }
            else if(it > 0){
                result[pos] = it;
                pos = pos + 2;
            }
        }
        return result;
    }
};