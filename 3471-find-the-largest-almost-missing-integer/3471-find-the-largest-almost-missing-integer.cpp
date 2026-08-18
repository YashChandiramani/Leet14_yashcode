class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        // map initialised
        unordered_map<int, int> map;
        int n = nums.size();
        // variable for the largest ele
        int larg_ele = -1;
        // keeping all the freq = 0
        for (int x : nums) {
            map[x] = 0;
        }
        // start with the first subarray
        int left = 0;
        int right = k - 1;

        while (right < n) {
            unordered_set<int>st;
            for(int i = left; i <= right; ++i){
                st.insert(nums[i]);
            }

            for(int x : st){
                map[x]++;
            }
            left++;
            right++;
        }
        for(auto it : map){
            if(it.second == 1){
                larg_ele = max(it.first, larg_ele);
            }
        }
        return larg_ele;
    }
};