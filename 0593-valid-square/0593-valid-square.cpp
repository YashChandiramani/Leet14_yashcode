class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> ans;
        bool side_verify = false;
        bool diag_verify = false;

        int d1 = (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
        int d2 = (p1[0] - p3[0]) * (p1[0] - p3[0]) + (p1[1] - p3[1]) * (p1[1] - p3[1]);
        int d3 = (p1[0] - p4[0]) * (p1[0] - p4[0]) + (p1[1] - p4[1]) * (p1[1] - p4[1]);
        int d4 = (p2[0] - p3[0]) * (p2[0] - p3[0]) + (p2[1] - p3[1]) * (p2[1] - p3[1]);
        int d5 = (p2[0] - p4[0]) * (p2[0] - p4[0]) + (p2[1] - p4[1]) * (p2[1] - p4[1]);
        int d6 = (p3[0] - p4[0]) * (p3[0] - p4[0]) + (p3[1] - p4[1]) * (p3[1] - p4[1]);

        ans.push_back(d1);
        ans.push_back(d2);
        ans.push_back(d3);
        ans.push_back(d4);
        ans.push_back(d5);
        ans.push_back(d6);
        sort(ans.begin(), ans.end());

        if(ans[0] == ans[1] && ans[1] == ans[2] && ans[2] == ans[3] && ans[3] == ans[0]){
            side_verify = true;
        }

        if(ans[4] == ans[5] && ans[4] >= ans[0] && ans[4] >= ans[1]
        && ans[4] >= ans[2] && ans[4] >= ans[3]){
            diag_verify = true;
        }

        if(ans[0] == 0 && ans[1] == 0 && ans[2] == 0 && 
        ans[3] == 0 && ans[4] == 0 && ans[5] == 0){
            return false;
        }

        return diag_verify && side_verify;
    }
};