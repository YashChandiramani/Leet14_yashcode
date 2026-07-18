class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size = nums.size() - 1;
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[size]);
    }
};