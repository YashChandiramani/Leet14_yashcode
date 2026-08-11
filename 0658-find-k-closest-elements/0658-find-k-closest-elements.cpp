class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        vector<pair<int, int>> dist_freq;

        for(int i : arr){
            dist_freq.push_back({abs(i - x), i});
        }

        sort(dist_freq.begin(), dist_freq.end());

        for(int i = 0 ; i < k; ++i){
            ans.push_back(dist_freq[i].second);
        }
        sort(ans.begin(), ans.end());

        return ans;
    }
};