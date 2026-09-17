/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        bool d = false;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                d = true;
                break;
            }
        }
        if(d == true){
            ListNode* temp = head;
            while(temp != slow){
                temp = temp->next;
                slow = slow->next;
            }
            return temp;
        }
        return nullptr;
    }
};