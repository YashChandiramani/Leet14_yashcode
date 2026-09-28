class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int n = s.size();
        int depth = 0;
        int max_depth = INT_MIN;
        for(int i = 0; i < n; ++i){
            if(s[i] == '('){
                st.push('(');
                depth++;
            }
            if(s[i] == ')'){
                st.pop();
                depth--;
            }
            max_depth = max(depth, max_depth);
        }
        return max_depth;
    }
};