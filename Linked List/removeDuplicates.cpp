#include <iostream>
using namespace std;

Node* solve(Node* head){
    if(head == NULL){
        return head;
    }
    if(head->next == NULL){
        return head;
    }
    Node* temp = head;
     while (temp != NULL && temp->next != NULL) {
        if (temp->data == temp->next->data) {
            // Duplicate found — remove next node
            Node* duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate; // free memory (optional in coding platforms)
        } else {
            temp = temp->next; // move forward if no duplicate
        }
    }

    return head;
}

//leetcode form of the code 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->val == temp->next->val) {
                // Duplicate found — remove next node
                ListNode* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate; // optional: helps avoid memory leak
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
//remove duplicaes from ll

int main(){

    return 0;
}
///duplicates in sorted ll

//solve questions of linkedlist
//contribution just for streak