class Solution {
public:
    bool checkDivisibility(int n) {
        int multi = 1;
        int sum = 0;
        int temp = n;

        while(temp > 0){
            int d = temp % 10;
            sum = sum + d;
            multi = multi * d;
            temp = temp / 10;
        }
        int total = sum + multi;
        return (n % total == 0);
    }
};