#include <iostream>
using namespace std;

class Solution{
    public:
    
    bool hasCycle(Node* head){

        map<Node*, bool> table;
        Node* temp = head;

        while(temp != NULL){
            if(table[temp] == false){
                table[temp] = true;
            }
            else{
                //cycle present h
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
}

int main(){

    return 0;
}