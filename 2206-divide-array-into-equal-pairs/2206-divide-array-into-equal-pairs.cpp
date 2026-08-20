class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();

        bool ans = false;

        unordered_map<int, int> map;

        for(int i = 0; i < n; ++i){
            map[nums[i]]++;
        }

        int count = 0;
        int actual_c = map.size();

        for(auto it : map){
            if(it.second % 2 == 0){
                count++;
                if(count == actual_c){
                    ans = true;
                }
                continue;
            }
        }
        return ans;
    }
};