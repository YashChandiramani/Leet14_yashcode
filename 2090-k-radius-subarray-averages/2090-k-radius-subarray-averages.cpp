class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> avgs(n, -1);

        if (k == 0) {
            return nums;
        }

        int wind_size = 2 * k + 1;

        if(wind_size > n){
            return avgs;
        }

        long long sum = 0;

        for(int i = 0; i < wind_size; ++i){
            sum += nums[i];
        }
        avgs[k] = sum / wind_size;

        for(int i = 1; i <= n - wind_size; ++i){
            sum = sum - nums[i - 1] + nums[i + wind_size - 1];
            avgs[i + k] = sum / wind_size;
        }
        return avgs;
    }
};