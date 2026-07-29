class Solution {
public:
    bool isPalindrome(string s) {

        string final_s = "";
        for(char c : s) {
            if(isalnum(c)) {
                final_s += tolower(c);
            }
        }
        string revfinal_s = final_s;
        reverse(revfinal_s.begin(), revfinal_s.end());
        return final_s == revfinal_s;
    }
};
