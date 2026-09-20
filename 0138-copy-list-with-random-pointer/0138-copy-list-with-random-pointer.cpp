/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;
        while(curr != nullptr){
            Node* temp = new Node(curr->val);
            temp->next = curr->next;
            curr->next = temp;
            curr = curr->next->next;
        }
        curr = head;
        while(curr != nullptr){
            Node* temp = curr->next;
            if(curr->random == nullptr){
                temp->random = nullptr;
            }
            else{
                temp->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        while(curr != nullptr && res != nullptr){
            res->next = curr->next;
            res = res->next;

            curr->next = curr->next->next;
            curr = curr->next;
        }
        head = dummy->next;
        return head;
    }
};