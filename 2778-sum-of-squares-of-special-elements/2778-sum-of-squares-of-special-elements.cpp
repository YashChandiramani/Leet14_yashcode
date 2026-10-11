class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum_o_s = 0;
        for(int i = 1; i <= n; ++i){
            if(n % i == 0){
                sum_o_s = sum_o_s + (nums[i - 1] * nums[i - 1]);
            }
        }
        return sum_o_s;
    }
};