class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last2 = n - 1;
        int last1 = m;

        while(last2 >= 0){
            nums1[last1] = nums2[last2];
            last1++;
            last2--;
        }
        sort(nums1.begin(), nums1.end());
    }
};