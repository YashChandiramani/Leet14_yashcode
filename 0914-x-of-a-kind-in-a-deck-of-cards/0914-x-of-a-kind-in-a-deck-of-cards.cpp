class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int> a;
        int n = deck.size();
        bool ans = true;
        unordered_map<int, int> freq;

        if (n == 1) {
            ans = false;
        }

        for (int i = 0; i < n; ++i) {
            freq[deck[i]]++;
        }
        for (auto it : freq) {
            a.push_back(it.second);
        }
        int mul = *std::min_element(a.begin(), a.end());

        int current_gcd = a[0];
        for (int i = 0; i < a.size(); ++i) {
            current_gcd = std::gcd(current_gcd, a[i]);

            if (current_gcd >= 2) {
                ans = true;
            }
            else{
                ans = false;
            }
        }
        return ans;
    }
};