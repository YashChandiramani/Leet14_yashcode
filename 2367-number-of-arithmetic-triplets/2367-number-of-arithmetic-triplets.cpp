class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[j] - nums[i] != diff) {
                    continue;
                }
                int k = j + 1;
                while (k < n) {
                    if (nums[k] - nums[j] == diff) {
                        count++;
                    }
                    k++;
                }
            }
        }
        return count;
    }
};