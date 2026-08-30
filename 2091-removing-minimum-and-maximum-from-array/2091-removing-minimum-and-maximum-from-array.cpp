class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        auto maxIt = max_element(nums.begin(), nums.end());
        auto minIt = min_element(nums.begin(), nums.end());

        int maxIndex = maxIt - nums.begin();
        int minIndex = minIt - nums.begin();

        if (minIndex > maxIndex)
            swap(minIndex, maxIndex);

        int fromFront = maxIndex + 1;
        int fromBack = n - minIndex;
        int fromBoth = (minIndex + 1) + (n - maxIndex);

        return min({fromFront, fromBack, fromBoth});
    }
};