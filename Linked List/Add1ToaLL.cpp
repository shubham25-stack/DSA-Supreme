#include <iostream>
using namespace std;

// Node definition
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to reverse the linked list
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

// Function to add 1 to the linked list
Node* addOne(Node* head) {
    // Step 1: Reverse the linked list
    head = reverse(head);

    int carry = 1;
    Node* temp = head;
    Node* prev = NULL;

    // Step 2: Add 1 to each digit
    while (temp != NULL) {
        int totalSum = temp->data + carry;
        temp->data = totalSum % 10;
        carry = totalSum / 10;

        prev = temp;
        temp = temp->next;
    }

    // Step 3: If carry still remains, add new node
    if (carry > 0) {
        Node* newNode = new Node(carry);
        prev->next = newNode;
    }

    // Step 4: Reverse again to restore original order
    head = reverse(head);

    return head;
}

// Helper function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Example: 1 -> 9 -> 9 (represents 199)
    Node* head = new Node(1);
    head->next = new Node(9);
    head->next->next = new Node(9);

    cout << "Original List: ";
    printList(head);

    head = addOne(head);

    cout << "After Adding One: ";
    printList(head);

    return 0;
}
