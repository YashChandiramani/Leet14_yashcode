class Solution {
public:

    bool check(vector<int>& nums, int threshold, int mid){
        long long sum = 0;
        for(int x : nums){
            sum = sum + (x + mid - 1) / mid;
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low < high){
            int mid = low + (high - low) / 2;
            if(check(nums, threshold, mid)){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};