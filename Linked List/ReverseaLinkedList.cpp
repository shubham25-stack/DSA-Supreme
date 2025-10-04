#include <iostream>
using namespace std;

class Solution{
    public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
 
        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;

        }
        return prev;
    }
}

int main(){

    return 0;
}