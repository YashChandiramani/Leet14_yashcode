class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int diff = 0;
        int qDiff = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                qDiff++;
            else
                diff += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                qDiff--;
            else
                diff -= num[i] - '0';
        }

        return 2 * diff != -9 * qDiff;
    }
};