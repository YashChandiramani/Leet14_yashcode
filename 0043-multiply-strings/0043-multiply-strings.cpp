class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0")
            return "0";

        int m = num1.size();
        int n = num2.size();

        vector<int> result(m + n, 0);

        // Multiply each digit
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                int mul = (num1[i] - '0') * (num2[j] - '0');

                int pos1 = i + j;
                int pos2 = i + j + 1;

                int sum = mul + result[pos2];

                result[pos2] = sum % 10;
                result[pos1] += sum / 10;
            }
        }

        string ans = "";

        for (int num : result) {
            if (!(ans.empty() && num == 0))
                ans += (num + '0');
        }

        return ans;
    }
};