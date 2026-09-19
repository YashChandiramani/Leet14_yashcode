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
private:
    ListNode* arrtoll(vector<int> arr){
        if(arr.empty()){
            return nullptr;
        }
        ListNode* head = new ListNode(arr[0]);
        ListNode* temp = head;
        
        for(int i = 1; i < arr.size(); ++i){
            ListNode* nn = new ListNode(arr[i]);
            temp->next = nn;
            temp = nn;
        }
        return head;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> ansarr;
        for(int i = 0; i < lists.size(); ++i){
            ListNode* curr = lists[i];
            while(curr != nullptr){
                ansarr.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(ansarr.begin(), ansarr.end());
        return arrtoll(ansarr);
    }
};