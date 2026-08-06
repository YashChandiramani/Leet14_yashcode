class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp = n;
        while (true) {
            int mul = 1;
            int x = temp;
            while (x > 0) {
                mul *= x % 10;
                x /= 10;
            }
            if (mul % t == 0) return temp;
            temp++;
        }
    }
};