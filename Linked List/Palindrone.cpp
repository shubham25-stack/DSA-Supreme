#include <iostream>
using namespace std;

// Define the structure of a node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    // Function to reverse the linked list using recursion
    Node* usingRecursion(Node* prev, Node* curr) {
        // Base case
        if (curr == NULL) {
            return prev;
        }

        Node* nextNode = curr->next;
        curr->next = prev;
        return usingRecursion(curr, nextNode);
    }

    // Function to find the middle node of the linked list
    Node* middleNode(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Compare two linked lists
    bool compareList(Node* head1, Node* head2) {
        while (head1 != NULL && head2 != NULL) {
            if (head1->data != head2->data)
                return false;

            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }

    // Check if linked list is palindrome
    bool isPalindrome(Node* head) {
        if (head == NULL || head->next == NULL)
            return true;

        Node* midNode = middleNode(head);
        Node* head2 = midNode->next;
        midNode->next = NULL;

        // Reverse second half
        head2 = usingRecursion(NULL, head2);

        // Compare both halves
        bool ans = compareList(head, head2);
        return ans;
    }
};

// Helper function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to append node at end
void append(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 2);
    append(head, 1);

    Solution s;

    cout << "Original List: ";
    printList(head);

    if (s.isPalindrome(head))
        cout << "The linked list is a palindrome." << endl;
    else
        cout << "The linked list is NOT a palindrome." << endl;

    return 0;
}
