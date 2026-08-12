class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int start = -1;
        int ans = 0;
        int n = nums.size();

        unordered_map<int, int> freq;

        for(int end = 0; end < n; ++end){
            freq[nums[end]]++;

            while(freq[nums[end]] > k){
                start = start + 1;
                freq[nums[start]]--;
            }
            ans = max(ans, end - start);
        }
        return ans;
    }
};