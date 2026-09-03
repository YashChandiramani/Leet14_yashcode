class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        long long smallest_odd = INT_MAX;
        long long ele = 0;
        int n = nums1.size();
        bool ans = true;
        bool check = true;
        vector<int> nums2;

        for (int i = 0; i < n; ++i) {
            if (nums1[i] % 2 == 0) {
                nums2.push_back(nums1[i]);
            }
        }
        if (nums2.size() == n) {
            return ans;
        }
        for (int i = 0; i < n; ++i) {
            if (nums1[i] % 2 != 0) {
                smallest_odd = min((long long)nums1[i], smallest_odd);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (smallest_odd > nums1[i] || smallest_odd == 0) {
                ans = false;
            }
        }
        return ans;
    }
};