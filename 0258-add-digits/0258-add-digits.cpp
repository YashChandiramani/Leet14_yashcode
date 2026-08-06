class Solution {
public:
    int solve(int n){
        if(n == 0){
            return 0;
        }
        return n % 10 + solve(n / 10);
    }
    int addDigits(int num) {
        if(num < 10){
            return num;
        }
        return addDigits(solve(num));
    }
};