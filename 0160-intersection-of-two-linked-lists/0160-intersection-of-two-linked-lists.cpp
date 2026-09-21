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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int first = 1;
        int second = 1;
        
        while(tempA != nullptr){
            first++;
            tempA = tempA->next;
        }
        while(tempB != nullptr){
            second++;
            tempB = tempB->next;
        }
        int diffa = 0;
        int diffb = 0;
        tempA = headA;
        tempB = headB;
        if(first < second){
            diffa = second - first;
            diffb = 0;
            while(diffa--){
                tempB = tempB->next;
            }
        }
        else{
            diffa = 0;
            diffb = first - second;
            while(diffb--){
                tempA = tempA->next;
            }
        }

        while (tempA != nullptr && tempB != nullptr) {
            if (tempA == tempB) {
                return tempA;
            }

            tempA = tempA->next;
            tempB = tempB->next;
        }
     

        return nullptr;
    }
};