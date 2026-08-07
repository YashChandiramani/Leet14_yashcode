class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int ans = 0;
        int n = nums.size();

        int j = 0;
        int i = 0;

        while (i < n) {

            if (nums[i] == 0) {
                j = i + 1;
            }

            ans = max(ans, i - j + 1);
            i++;
        }

        return ans;
    }
};