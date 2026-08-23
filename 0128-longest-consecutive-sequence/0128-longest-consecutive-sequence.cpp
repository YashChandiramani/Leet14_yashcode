class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        if(n == 0){
            return 0;
        }

        int longest = 1;
        int cntcurr = 0;
        int lastsmaller = INT_MIN;

        for(int i = 0; i < n; ++i){
            if(nums[i] - 1 == lastsmaller){
                cntcurr++;
                lastsmaller = nums[i];
            }
            else if(nums[i] != lastsmaller){
                cntcurr = 1;
                lastsmaller = nums[i];
            }
            longest = max(longest, cntcurr);
        }
        return longest;
    }
};