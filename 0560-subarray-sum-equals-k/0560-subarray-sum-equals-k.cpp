class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int>mapp;
        mapp[0] = 1;
        int preSum = 0, cnt = 0;

        for(int i = 0; i < n; ++i){
            preSum += nums[i];
            int remove = preSum - k;
            cnt += mapp[remove];
            mapp[preSum] += 1;
        }
        return cnt;
    }
};