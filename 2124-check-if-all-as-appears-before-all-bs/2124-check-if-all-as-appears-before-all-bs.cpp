class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        for(int i = 1; i < n; ++i){
            string temp = "";
            temp += s[i - 1];
            temp += s[i];
            if(temp == "ba"){
                return false;
            }
        }
        return true;
    }
};