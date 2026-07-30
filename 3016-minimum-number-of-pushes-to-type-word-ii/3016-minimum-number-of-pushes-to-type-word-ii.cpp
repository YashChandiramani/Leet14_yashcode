class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> freq;

        // Count frequencies
        for (char ch : word) {
            freq[ch]++;
        }

        // Copy map to vector
        vector<pair<char, int>> v(freq.begin(), freq.end());

        // Sort by frequency (descending)
        sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b) {
            return a.second > b.second;
        });

        int pushes = 0;

        // Assign push costs
        for (int i = 0; i < v.size(); i++) {
            pushes += v[i].second * (i / 8 + 1);
        }

        return pushes;
    }
};