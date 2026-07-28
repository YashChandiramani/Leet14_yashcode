class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> ans{};
        deque<int> seen{};
        int j = 0, k = 0, sz = nums.size();
        for(int i = 0; i < sz; ++i)
        {
            if(nums[i] > 0)
                seen.push_front(nums[i]);
            if(nums[i] == -1)
            {
                j = i;
                k = 0;
                while(j < sz && nums[j] == -1)
                {
                    ++j;
                    if(k < seen.size())
                        ans.push_back(seen[k]);
                    else
                        ans.push_back(-1);
                    ++k;
                }
                i = j-1;
            }
        }
        return ans;
    }
};