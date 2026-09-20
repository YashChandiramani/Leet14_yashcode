class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int n = s.size();

        for(int i = 1; i <= n; ++i){
            sum = sum + (26 - (s[i - 1] - 'a')) * i;
        }
        return sum;
    }
};