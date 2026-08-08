class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<int> suf(m, -1);

        int j = n - 1;

        for (int i = m - 1; i >= 0; --i) {
            while (j >= 0 && word1[j] != word2[i]) {
                --j;
            }

            if (j < 0)
                break;

            suf[i] = j;
            --j;
        }

        vector<int> ans;

        int start = 0;
        bool usedMismatch = false;

        for (int i = 0; i < m; ++i) {

            for (int j = start; j < n; ++j) {

                bool mismatch = (word1[j] != word2[i]);

                if (mismatch && usedMismatch)
                    continue;

                if (i + 1 < m) {

                    if (mismatch) {
                        // Remaining suffix must match exactly.
                        if (suf[i + 1] == -1 ||
                            suf[i + 1] <= j) {
                            continue;
                        }
                    }
                    else {
                        if (n - (j + 1) < m - (i + 1)) {
                            continue;
                        }
                    }
                }

                ans.push_back(j);
                start = j + 1;

                if (mismatch)
                    usedMismatch = true;

                goto next_character;
            }

            return {};
            
            next_character:;
        }

        return ans;
    }
};