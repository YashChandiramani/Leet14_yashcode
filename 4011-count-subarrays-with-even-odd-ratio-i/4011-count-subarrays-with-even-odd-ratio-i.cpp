class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        vector<int> norvelith = nums; 

        int n = nums.size();
        int valid_sub = 0;

        for (int i = 0; i < n; i++) {
            int x = 0; 
            int y = 0; 

            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0)
                    x++;
                else
                    y++;

                if (y > 0 && (long long)x * b <= (long long)a * y)
                    valid_sub++;
            }
        }

        return valid_sub;
    }
};