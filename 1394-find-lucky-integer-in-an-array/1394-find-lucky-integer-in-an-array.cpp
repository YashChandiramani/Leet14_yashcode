class Solution {
public:
    int findLucky(vector<int>& arr) {
        int lucky_num = -1;
        int max_lucky = INT_MIN;
        int n = arr.size();
        unordered_map<int, int> freq;

        for(int i = 0; i < n; ++i){
            freq[arr[i]]++;
        }
        for(auto it : freq){
            if(it.first == it.second){
                lucky_num = it.first;
            }
            max_lucky = max(lucky_num, max_lucky);
        }
        return max_lucky;
    }
};