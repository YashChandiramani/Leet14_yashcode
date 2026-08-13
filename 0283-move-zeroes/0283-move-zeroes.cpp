class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == 0) {
                count++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        while(count > 0) {
            nums.push_back(0);
            count--;
        }
    }
};