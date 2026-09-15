class Solution {
public:
    int findMin(vector<int>& nums) {
        int high = nums.size() - 1;
        int low = 0;
        int ans = 0;
        while(low < high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        return nums[low];
    }
};