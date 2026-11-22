class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        if(nums.size() == 1) return 1;
        for(int i=0; i<n; i++){
            if(i == 0 && nums[0] >= nums[1]) ans++;
            else if(i == n-1 && nums[n-1] >= nums[n-2]) ans++;
            else if(i != 0 && i != n-1){
                double avg = (nums[i-1] + nums[i+1])/double(2);
                if(nums[i] >= avg) ans++;
            }
        }
        return ans;
    }
};