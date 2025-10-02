#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(){
        cout<<"I am inside default constructor"<<endl;
        this->next = NULL;
    }
    Node(int data){
        cout<<"I am inside parameterised constructor"<<endl;
        this->data = data;
        this->next = NULL;
    }
};
int getLength(Node* head) {
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void printLL(Node* head ){
    Node* temp=head;
    int count =0;

    while(temp != NULL){
        cout<<temp->data<<"->";
        count++;

        temp = temp->next;
    }
    cout<<"\nno of nodes is :"<<count<<endl;
}

void insertAtHead(Node* &head,Node* &tail, int data){
    //for empty case
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail =newNode;
    }
    else{
         //create a new node
    Node* newNode = new Node(data);
    //attach new node to head
    newNode->next = head;
    //update head
    head=newNode;
    }
   
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        //sigle node h to head and tail dono same jagah point hoga
        head = newNode;
        tail = newNode;
    }
    else{
        //non empty 
        //step1 : create new node
        Node* newNode = new Node(data);

        //step2: tail node ko attach kro newnode se
        tail->next = newNode;
        //step3: update tail
        tail=newNode;

    }
}
void insertAtPosition(Node* &head,Node* &tail, int data,int position){
    // if(position < 1){
    //     cout<<"Cannot insert please enter a valid position"<<endl;
    //     return;
    // }
    int length = getLength(head);

    // if(position>length){
    //     cout<<"Cannot insert please enter a valid position"<<endl;
    //     return;
    // }
    if(position <= 1){
        insertAtHead(head,tail,data);
    }
    else if(position > length){ //yaha pe galti kroge +1 lgana mat bhulna 
        insertAtTail(head,tail,data);
    }
    else{
        //insert at middle of linked list
        //step1: create node
        Node* newNode = new Node(data);
        //step 2 traverse prev/curr to position
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        //step 3: attach prev to next
        prev->next = newNode;
        //attact new to curr
        newNode -> next = curr;
    }
}

 void deleteNode(Node* &head, Node* &tail,int position){
        //empty linkedlist
        if(head == NULL){
            cout<<"Cannot delete, bcoz LL is empty"<<endl;
            return;
        }
        if(head==tail){
            Node* temp = head;
            delete temp;
            head = NULL;
            tail = NULL;
            return;
        }
        int length = getLength(head);
        //delete from head
        if(position == 1){
            //first node ko delete krr do
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;

        }
        else if(position == length){
            //last node ko delete krr do

            //prev find kro
            Node* prev = head;
            while(prev->next != tail){
                prev = prev -> next;
            }
            //prev node ka link null kro
            prev -> next = NULL;
            delete tail;
            tail = prev;

        }
        else{
            //middle me kisi v node ko delete krr do
            //step1: set prev and curr
            Node* prev = NULL;
            Node* curr = head;
            while (position != 1)
            {
                position--;
                prev = curr;
                curr = curr->next;
            }
            //prev k next me curr ka next add kro
            prev->next = curr->next;

            //step3: node isolate krdo
            curr->next = NULL;
            //step 4: delete node
            delete curr;
        }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,50);
    insertAtTail(head,tail,20);
    insertAtPosition(head,tail,70,9);
    printLL(head);
    deleteNode(head,tail,3);
    printLL(head);
}