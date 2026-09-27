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
    ListNode* rev(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = rev(l1);
        l2 = rev(l2);
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;
        while(t1 || t2){
            int sum = carry;
            if(t1) {
                sum = sum + t1->val;
                t1 = t1->next;
            }
            if(t2){
                sum = sum + t2->val;
                t2 = t2->next;
            }
            ListNode* newnode = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = newnode;
            curr = curr->next;
            if(carry) {
                ListNode* newNode = new ListNode(carry);
                curr->next = newNode;
            }
        }
        return rev(dummy->next);
    }
};