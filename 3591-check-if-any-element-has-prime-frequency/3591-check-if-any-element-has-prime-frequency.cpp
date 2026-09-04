class Solution {
private:
    bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        bool ans = false;
        for(int x : nums){
            freq[x]++;
        }
        for(auto it : freq){
            int y = it.second;
            bool check = isPrime(y);
            if(check == true){
                ans = true;
            }
            else if(check == false){
                continue;
            }
        }
        return ans;
    }
};