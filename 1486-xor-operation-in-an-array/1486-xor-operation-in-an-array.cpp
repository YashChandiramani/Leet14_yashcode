class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> vec;
        for(int i = 0; i < n; ++i){
            vec.push_back(start + (2 * i));
        }
        int ans = vec[0];
        for(int i = 1; i < vec.size(); ++i){
            ans = ans ^ vec[i];
        }
        return ans;
    }
};