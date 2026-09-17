/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> bin;
        vector<int> multi;
        vector<int> ans;
        long long num = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            bin.push_back(curr->val);
            curr = curr->next;
        }
        int org = bin.size();
        int n = org - 1;
        while(n >= 0){
            multi.push_back(pow(2, n));
            if(n == 0){
                multi.push_back(1);
            }
            n--;
        }
        for(int i = 0; i < org; ++i){
            long long push = bin[i] * multi[i];
            ans.push_back(push);
        }
        for(int i = 0; i < ans.size(); ++i){
            num = num + ans[i];
        }
        return num;
    }
};