#include <iostream>
using namespace std;

// bool checkLoop(Node* &head){
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         //check for loop
//         if(fast == slow){
//             return true;
//         }
//     }
//     return false;

// } this was the anothere method through which we can make changes by calling this as function and then compare and make changes from there 

Node* startingLoop(Node* &head){
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
    return slow;
}

int main(){

    return 0;
}