class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        vector<int> notp;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        unordered_map<int, int> map;

        int curr = lower;

        for(int i : nums){
            map[i]++;
        }

        int start = -1;

        for(int i = lower; i <= upper; ++i){

            if(map.find(i) == map.end()){
                if(start == -1){
                    start = i;
                }
            }
            else{
                if(start != -1){
                    ans.push_back({start, i - 1});
                    start = -1;
                }
            }
        }
        if(start != -1){
            ans.push_back({start, upper});
        }

        return ans;
    }
};