class Solution {
public:
    int minMoves(vector<int>& nums) {
        int lo = *min_element(nums.begin(), nums.end()), moves = 0;
        for (int x : nums) moves += x - lo;
        return moves;
    }
};