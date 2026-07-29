class Solution {
private:
    bool isAlphabet(char c) {
        return (c >= 'a' && c <= 'z');
    }

public:
    string reverseByType(string s) {
        int n = s.size();

        // Pass 1: Reverse only letters
        int i = 0, j = n - 1;
        while (i < j) {
            while (i < j && !isAlphabet(s[i]))
                i++;
            while (i < j && !isAlphabet(s[j]))
                j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        // Pass 2: Reverse only special characters
        i = 0;
        j = n - 1;
        while (i < j) {
            while (i < j && isAlphabet(s[i]))
                i++;
            while (i < j && isAlphabet(s[j]))
                j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};