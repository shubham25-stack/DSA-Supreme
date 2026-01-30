#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// function to create tree
Node* createTree() {
    int data;  
    cout << "Enter the value: ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    // Step 1: create node
    Node* root = new Node(data);

    // Step 2: create left subtree
    cout << "Enter left child of " << data << endl;
    root->left = createTree();

    // Step 3: create right subtree
    cout << "Enter right child of " << data << endl;
    root->right = createTree();

    return root;
}

int main() {
    Node* root = createTree();
    return 0;
}
