class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int min_5_per = n / 20;
        int max_5_per = min_5_per;

        sort(arr.begin(), arr.end());

        arr.erase(arr.begin(), arr.begin() + min_5_per);
        n = n - min_5_per;

        double mean = 0;
        double sum = 0;
        for(int i = 0; i < n - max_5_per; ++i){
            sum = sum + arr[i];
        }
        mean = sum / (n - max_5_per);
        return mean;
    }
};