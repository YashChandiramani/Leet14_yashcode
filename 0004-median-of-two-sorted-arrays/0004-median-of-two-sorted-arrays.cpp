class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> med;
        float median = 0;

        for(int i = 0; i < n; ++i){
            med.push_back(nums1[i]);
        }
        for(int i = 0; i < m; ++i){
            med.push_back(nums2[i]);
        }

        sort(med.begin(), med.end());

        int a_size = med.size();
        if(a_size % 2 == 0){
            median = (med[a_size / 2 - 1] + med[a_size / 2]) / 2.0;
        }
        else{
            median = med[a_size / 2];
        }
        return median;
    }
};