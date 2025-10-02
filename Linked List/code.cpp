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

int getLength(Node* head) {
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
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


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,50);
    insertAtTail(head,tail,20);
    insertAtPosition(head,tail,70,9);
    printLL(head);
    //create a node
    //Node a; //static node

    // Node* first = new Node(10); //dynamically
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // //link list created for example
    // Node* head = first;
    // Node* tail = fifth;
    // cout<<"Printing the linked list"<<endl;
    // printLL(head);

    // insertAtTail(head,tail,600);
    // printLL(head);    



    return 0;
}