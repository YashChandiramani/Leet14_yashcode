class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = INT_MIN;
        vector<int> prefixGcd;
        for(int num: nums){
            mx = max(num, mx);
            int ans = gcd(num, mx);
            prefixGcd.push_back(ans);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int r = prefixGcd.size() - 1;
        int l = 0;
        long long sum = 0;
        while(l < r){
            sum = sum + gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};