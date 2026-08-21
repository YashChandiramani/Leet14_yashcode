class Solution {
public:

    long long gcd(long long a, long long b) {
        while(b) {
            long long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }

    int nthUglyNumber(int n, int a, int b, int c) {

        long long ab = lcm(a, b);
        long long ac = lcm(a, c);
        long long bc = lcm(b, c);

        long long abc = lcm(ab, c);

        long long low = 1;
        long long high = 2000000000LL;

        while(low < high) {

            long long mid = low + (high - low) / 2;

            long long count =
                mid / a +
                mid / b +
                mid / c -
                mid / ab -
                mid / ac -
                mid / bc +
                mid / abc;

            if(count >= n) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};