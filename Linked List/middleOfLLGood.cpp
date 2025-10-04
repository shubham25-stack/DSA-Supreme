#include <iostream>
using namespace std;

class Solution{
    public:
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            //fast ko aage badhao
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                //fast ne do step chal liye h
                slow = slow->next;
            }
        }
        return slow; //sometimes yaha pe return slow->data ye kia jata h..
    }
}

int main(){

    return 0;
}