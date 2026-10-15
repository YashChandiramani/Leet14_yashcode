class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a, b, c, d;
        char plusSign, iChar;
        stringstream ss1(num1);
        ss1 >> a >> plusSign >> b >> iChar;
        stringstream ss2(num2);
        ss2 >> c >> plusSign >> d >> iChar;
        int real_part = (a * c) - (b * d);
        int imag_part = (a * d) + (b * c);
        return to_string(real_part) + "+" + to_string(imag_part) + "i";
    }
};
