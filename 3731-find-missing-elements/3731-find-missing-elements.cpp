class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> map;
        vector<int> ans;
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());

        for(int i = min; i <= max; ++i){
            map[i]++;
        }
        for(int i = 0; i < n; ++i){
            map[nums[i]]++;
        }
        for(auto id : map){
            if(id.second == 1){
                ans.push_back(id.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};