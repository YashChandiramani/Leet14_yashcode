class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i){
            freq[nums[i]]++;
        }
        vector<pair<int, int>>a;
        for(auto it : freq){
            a.push_back({it.second, it.first});
        }
        sort(a.rbegin(), a.rend());
        vector<int> ans;
        for(int i = 0; i < k; ++i){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};