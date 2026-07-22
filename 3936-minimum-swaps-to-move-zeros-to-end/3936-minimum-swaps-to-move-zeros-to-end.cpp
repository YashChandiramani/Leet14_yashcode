class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int count = 0;

            while (i < j) {
                if(nums[j] == 0){
                    j--;
                }
                else if (nums[i] == 0 && nums[j] != 0) {
                    swap(nums[i], nums[j]);
                    i++;
                    j--;
                    count++;
                }
                else i++;
            }
        return count;
    }
};