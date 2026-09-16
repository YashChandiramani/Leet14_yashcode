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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr) {

            int x = gcd(temp->val, temp->next->val);

            ListNode* nn = new ListNode(x);

            nn->next = temp->next;
            temp->next = nn;

            temp = nn->next;
        }

        return head;
    }
};