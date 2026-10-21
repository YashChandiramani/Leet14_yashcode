class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;
        int mid = l + (h - l) / 2;
        int mid_ele = nums[mid];
        bool a1 = false;
        bool a2 = false;

        for(int i = 0; i < mid; ++i){
            if(nums[i] == mid_ele) a1 = true;
        }
        for(int i = mid + 1; i <= h; ++i){
            if(nums[i] == mid_ele) a2 = true;
        }
        if(a1 == true || a2 == true){
            return false;
        }
        return true;
    }
};