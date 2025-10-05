#include <iostream>
using namespace std;

int getLength(Node* head){
    Node* temp = head;
    int count  = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* reverseInKgroup(Node* &head, int k){
    if(head == NULL){
        return head;
    }
    if(head->next == NULL){
        return head;
    }
    //mai sirf 1 case solve krunga
    Node* prev = NULL; 
    Node* curr = head;
    Node* nextNode= NULL;
    int pos = 0;
    int len = getLength(head);
    if(len<k){
        return head;
    }

    while(pos <k){
        pos++;
        nextNode= curr->next;
        prev = curr->next;
        prev=curr;
        curr = nextNode;
    }
    Node* recursionKaAns = NULL;
    if(nextNode != NULL){
        recursionKaAns = reverseInKgroup(nextNode,k)
        head->next = recursionKaAns;
    }
    return prev;
}

//another approach
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
    int getLength(ListNode* head) {
        int len = 0;
        while (head != NULL) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;

        int len = getLength(head);
        if (len < k)
            return head;

        // Step 1: Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        int count = 0;

        while (curr != NULL && count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        // Step 2: Recursively reverse remaining list
        if (forward != NULL) {
            head->next = reverseKGroup(forward, k);
        }

        // Step 3: Return new head (prev)
        return prev;
    }
};


int main(){

    return 0;
}