class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high = nums.size() - 1;
        int n = nums.size();
        int low = 0;
        if(n == 1){
            return 0;
        }
        while(low < high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[mid + 1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};