class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int large = *max_element(nums.begin(), nums.end());

        int n = nums.size();

        if (n == 1) {
            return 0;
        }

        vector<bool> ans;

        for (int x : nums) {
            if (x * 2 > large && x != large) {
                ans.push_back(false);
            }
            else {
                ans.push_back(true);
            }
        }

        bool result = all_of(ans.begin(), ans.end(), [](bool x) {
            return x;
        });

        if (result) {
            return find(nums.begin(), nums.end(), large) - nums.begin();
        }

        return -1;
    }
};