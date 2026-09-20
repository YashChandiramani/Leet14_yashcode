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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k == 0){
                return head;
            }
        ListNode* curr = head;
        int n = 1;
        while(curr->next != nullptr){
            curr = curr->next;
            n++;
        }
        curr->next = head;
        k = k % n;
        int steps = n - k - 1;
        ListNode* newTail = head;
        while(steps--){
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};