class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int max_len = 0;
        unordered_map<char, int>freq;

        int i = 0;
        int j = 0;

        while(j < n){

            freq[s[j]]++;

            while(freq[s[j]] > 2){
                freq[s[i]]--;
                i++;
            }
            
            int len = j - i + 1;
            max_len = max(len, max_len);

            j++;
        }
        return max_len;
    }
};