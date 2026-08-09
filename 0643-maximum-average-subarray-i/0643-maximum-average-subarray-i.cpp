class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double avg = 0;
        double max_avg = 0;
        int n = nums.size();

        for(int i = 0; i < k; ++i){
            sum = sum + nums[i];
        }
        avg = sum / k;
        max_avg = avg;

        for(int i = 1; i <= n - k; ++i){
            sum = sum - nums[i - 1] + nums[i + k - 1];
            avg = sum / k;
            if(avg > max_avg){
                max_avg = avg;
            }
        }
        return max_avg;
    }
};