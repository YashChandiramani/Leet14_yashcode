class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n == 0){
            return 0;
        }

        else if(n == 1){
            return 1;
        }

        vector<int> nums(n + 1);
        nums[0] = 0;
        nums[1] = 1;
        int a = 1;
        int b = 1;

        for(int i = 2; i <= n; ++i){
            a = i % 2;
            b = i / 2;
            if(a == 0){
                nums[i] = nums[b];
            }
            else{
                nums[i] = nums[b] + nums[b + 1];
            }
        }
        return *max_element(nums.begin(), nums.end());
    }
};