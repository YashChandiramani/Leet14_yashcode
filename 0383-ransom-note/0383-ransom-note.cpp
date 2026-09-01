class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        bool ans = true;

        for(char c : magazine){
            mp[c]++;
        }

        for(char c : ransomNote){
            if(mp[c] == 0){
                ans = false;
            }
            mp[c]--;
        }
        return ans;
    }
};