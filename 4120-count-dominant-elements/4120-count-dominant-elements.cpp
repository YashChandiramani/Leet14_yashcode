class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                if (nums[0] >= nums[1]) count++;
            }
            else if (i == n - 1) {
                if (nums[n - 1] >= nums[n - 2]) count++;
            }
            else {
                double avg = ((double)nums[i - 1] + nums[i + 1]) / 2.0;
                if (nums[i] >= avg) count++;
            }
        }
        return count;
    }
};