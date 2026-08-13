class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int max1 = 0;

        for(int i = 0; i < n; ++i){
            if(nums[i] == 1){
                count++;
                max1 = max(max1, count);
            }
            else if(nums[i] == 0){
                count = 0;
            }
        }
        return max1;
    }
};