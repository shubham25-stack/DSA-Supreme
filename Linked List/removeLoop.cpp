#include <iostream>
using namespace std;

void removeLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(fast == slow){
            break;
        }
    }
    if(fast == NULL){
        return NULL;
    }
    //yaha pohcha iska mtlb loop present h
    slow = head;

    //slow and fast ko 1,1 step aage badhate h
    while(fast != slow){
        slow = slow->next;
        fast = fast->next;
    }
    Node* startPoint = slow;

    Node* temp = fast;
    while(temp->next != startPoint){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){

    return 0;
}