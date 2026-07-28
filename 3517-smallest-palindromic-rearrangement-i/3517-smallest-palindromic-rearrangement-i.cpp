#include <iostream>
#include <map>
#include <string>
#include <algorithm>

class Solution {
public:
    string smallestPalindrome(string s) {
        std::map<char, int> letterCounts;
        for (char ch : s) {
            letterCounts[ch]++;
        }

        std::string half = "";
        char middleChar = '\0';
        int oddCount = 0;


        for (const auto& pair : letterCounts) {
            char ch = pair.first;
            int freq = pair.second;

            if (freq % 2 != 0) {
                oddCount++;
                middleChar = ch;
            }
            half.append(freq / 2, ch);
        }

        string rightHalf = half;
        reverse(rightHalf.begin(), rightHalf.end());
        
        if (middleChar != '\0') {
            return half + middleChar + rightHalf;
        }
        return half + rightHalf;
    }
};
