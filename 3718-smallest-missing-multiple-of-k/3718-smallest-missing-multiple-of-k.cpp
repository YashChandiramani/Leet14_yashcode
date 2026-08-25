class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());

        int multiple = k;

        while (st.find(multiple) != st.end()) {
            multiple += k;
        }

        return multiple;
    }
};