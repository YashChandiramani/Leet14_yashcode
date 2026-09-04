class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        long long limit = a * b;
        if(a == 1 && b == 1){
            return 1;
        }
        for(int i = 1; i < limit; ++i){
            if(a % i == 0 && b % i == 0){
                ans++;
            }
        }
        return ans;
    }
};