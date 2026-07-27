class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        if(n < 4){
            ans = 0;
        }
        while(n > 0){
            n = n / 5;
            ans = ans + n;
        }
        return ans;
    }
};