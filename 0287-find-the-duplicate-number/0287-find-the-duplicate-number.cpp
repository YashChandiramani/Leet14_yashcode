class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> freq;

        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        for(auto it : freq){
            if(it.second > 1){
                ans = it.first;
            }
        }
        return ans;
    }
};