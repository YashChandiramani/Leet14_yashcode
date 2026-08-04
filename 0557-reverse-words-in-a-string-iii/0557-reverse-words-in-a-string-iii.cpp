class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string word;
        int n = s.size();

        for(int i = 0; i < n; ++i){
            if(s[i] != ' '){
                word = word + s[i];
            }
            else{
                reverse(word.begin(), word.end());
                ans = ans + word;
                ans = ans + ' ';
                word.clear();
            }
        }
        reverse(word.begin(), word.end());
        ans = ans + word;
        return ans;
    }
};