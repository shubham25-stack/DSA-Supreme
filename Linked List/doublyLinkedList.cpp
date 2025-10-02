#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node* head) {
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        int len = findLength(head);

        if (pos == 1) {
            insertAtHead(head, tail, data);
        }
        else if (pos == len + 1) {
            insertAtTail(head, tail, data);
        }
        else {
            // insert in middle
            Node* newNode = new Node(data);
            Node* currNode = head;

            // move to pos-1
            for (int i = 1; i < pos - 1; i++) {
                currNode = currNode->next;
            }

            Node* nextNode = currNode->next;

            // link updates
            currNode->next = newNode;
            newNode->prev = currNode;
            newNode->next = nextNode;
            nextNode->prev = newNode;
        }
    }
}

void deleteNode(Node* &head,Node* &tail, int position){
    if(head == NULL){
        cout<<"Cannot delete because LL is Empty"<<endl;
        return;
    }
    if(head==tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

    int len = findLength(head);

if(position ==1){
    //delete from head
    Node* temp = head;
    head = head->next;
    temp -> next = NULL;
    head->prev = NULL;
    delete temp;
}
else if(position == len){
    Node* prevNode = tail->prev;
    prevNode->next = NULL;
    tail->prev = NULL;
    delete tail;
    tail = prevNode;
}
else{
    //delete from middle
    //step1:set prev,next,curr
    Node* prevNode = NULL;
    Node* currNode = head;
    while(position != 1){
        position--;
        prevNode = currNode;
        currNode = currNode->next;
    }
    Node* nextNode = currNode -> next;

    //step 2: 
    prevNode->next = nextNode;
    currNode->prev = NULL;
    currNode->next = NULL;
    nextNode -> prev = prevNode;

    delete currNode;

}

}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 40);   // 40
    insertAtHead(head, tail, 30);   // 30 40
    insertAtHead(head, tail, 50);   // 50 30 40
    insertAtTail(head, tail, 80);
    insertAtPosition(head, tail, 100,3);
    deleteNode(head,tail,2);

    cout << "Linked List: ";
    printLL(head);

    cout << "Length: " << findLength(head) << endl;

    return 0;
}
