class Solution {
private:
    bool isAlphabet(char c) {
        return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
    }

public:
    string reverseOnlyLetters(string s) {

        int i = 0;
        int j = s.size() - 1;

        while (i <= j) {
            if (!isAlphabet(s[i])) {
                i++;
            } else if (!isAlphabet(s[j])) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};