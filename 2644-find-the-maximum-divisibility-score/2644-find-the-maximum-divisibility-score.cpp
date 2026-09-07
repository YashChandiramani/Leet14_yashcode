class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxScore = -1;
        int answer = INT_MAX;

        for (int d : divisors) {
            int count = 0;

            for (int x : nums) {
                if (x % d == 0) {
                    count++;
                }
            }

            if (count > maxScore || 
                (count == maxScore && d < answer)) {
                maxScore = count;
                answer = d;
            }
        }

        return answer;
    }
};