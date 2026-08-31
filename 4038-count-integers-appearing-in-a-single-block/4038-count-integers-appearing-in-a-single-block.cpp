class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        freq[nums[0]] = 1;
        
        for(int i = 1; i < n; ++i){
            if(nums[i] != nums[i - 1]){
                freq[nums[i]]++;
            }
        }
        int cnt = 0;
        for(auto &it : freq){
            if(it.second == 1){
                cnt++;
            }
        }
        return cnt;
    }
};