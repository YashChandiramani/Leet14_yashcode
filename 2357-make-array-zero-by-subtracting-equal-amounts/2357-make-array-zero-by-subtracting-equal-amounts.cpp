class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int prev = 0;

        for (int x : nums) {
            if (x != 0 && x != prev) {
                ans++;
                prev = x;
            }
        }

        return ans;
    }
};