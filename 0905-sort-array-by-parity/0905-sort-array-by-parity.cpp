class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> even_vec;
        vector<int> odd_vec;
        vector<int> ans;

        for(int i = 0; i < n; ++i){
            if(nums[i] % 2 == 0){
                even_vec.push_back(nums[i]);
            }
            else{
                odd_vec.push_back(nums[i]);
            }
        }
        for(int i = 0; i < even_vec.size(); ++i){
            ans.push_back(even_vec[i]);
        }
        int ans_size = ans.size();
        for(int i : odd_vec){
            ans.push_back(i);
        }
        return ans;
    }
};