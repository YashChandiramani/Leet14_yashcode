class Solution {
public:
    bool canAliceWin(int n) {
        int t = 10;
        int k = 0;
        while(n >= t){
            n = n - t;
            t--;
            k++;
        }
        return k % 2 == 1;
    }
};