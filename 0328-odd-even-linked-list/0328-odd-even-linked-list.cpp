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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* even = head->next;
        ListNode* odd = head;
        ListNode* evenhead = even;
        while(even != nullptr && even->next != nullptr){
            //set the odd position
            odd->next = even->next;
            odd = odd->next;
            //set the even position 
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
    }
};