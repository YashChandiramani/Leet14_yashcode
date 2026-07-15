class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = n * n;
        int sumOdd = n * (n + 1);

        return gcd(sumOdd, sumEven);
    }
};