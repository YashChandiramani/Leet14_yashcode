class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX,ans = INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0 ; i<n ;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j = i+1;
            int k = n-1;

            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int curDiff = abs(sum-target);

                if(curDiff<diff)
                {
                    ans = sum;
                    diff = curDiff;
                }

                int sign = sum-target;

                if(sign<0) j++;
                else k--;

            }
        }

        return ans;
    }
};