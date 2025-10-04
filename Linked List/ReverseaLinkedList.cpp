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

//by recursion
void usingrecursion(Node* prev, Node* curr){
    //base case
    if(curr == NULL){
        return;
    }
    Node* nextNode = curr->next;
    curr->next = prev;
    prev= curr;
    curr = nextNode;
    //baki recursion sambhalega
    Node* recursionAns = usingrecursion(prev,curr);
    return recursionAns;
}

int main(){

    return 0;
}