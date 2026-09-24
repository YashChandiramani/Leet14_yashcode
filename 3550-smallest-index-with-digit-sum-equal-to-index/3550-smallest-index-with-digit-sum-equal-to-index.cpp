class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        vector<int> ans;
        for(int i = 0; i < n; ++i){
            int sum  = 0;
            int num = nums[i];
            int temp = num;
            while(temp > 0){
                int d = temp % 10;
                sum = sum + d;
                temp = temp / 10;
            }
            if(sum == i){
                ans.push_back(i);
            }
        }
        int answer = 0;
        sort(ans.begin(), ans.end());
        if(ans.empty() == false){
            answer = ans[0];
        }
        else{
            answer = -1;
        }
        return answer;
    }
};