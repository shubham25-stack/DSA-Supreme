#include <iostream>
using namespace std;

class Solution{
    public:
    int getLength(Node* head){
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp->next = temp;
        }
        return count;
    }
     //another function
     Node* middleNode(Node* head){
        Node* temp = head;
        int n = getLength(head);
        int mid = (n/2)+1;

        while(temp != mid){
            temp->next = temp;
        }
        return temp;
     }
}



int main(){

    return 0;
}