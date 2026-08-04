class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        int n = columnNumber;
        int q = 0;
        int r = 0;
        while(n > 0){
            r = (n - 1) % 26;
            ans = char(65 + r) + ans;
            n = (n - 1) / 26;
        }
        return ans;
    }
};