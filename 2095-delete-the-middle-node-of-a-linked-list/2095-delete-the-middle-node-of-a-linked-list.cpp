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
    ListNode* deleteMiddle(ListNode* head) {

        // Only one node
        if (head->next == nullptr)
            return nullptr;

        int count = 0;
        ListNode* curr = head;

        // Count nodes
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        int mid = count / 2;

        curr = head;
        ListNode* prev = nullptr;

        // Move to middle node
        for (int i = 0; i < mid; i++) {
            prev = curr;
            curr = curr->next;
        }

        // Delete middle
        prev->next = curr->next;

        return head;
    }
};