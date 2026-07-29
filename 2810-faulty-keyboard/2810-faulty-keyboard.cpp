class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string ans = "";

        for(int i = 0; i < n; ++i){
            if(s[i] != 'i'){
                ans = ans + s[i];
            }
            else if(s[i] == 'i'){
                reverse(ans.begin(), ans.end());
            }
        }
        return ans;
    }
};