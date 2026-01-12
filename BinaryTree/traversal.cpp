#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Preorder Traversal (NLR)
void preOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Inorder Traversal (LNR)
void inOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Postorder Traversal (LRN)
void postOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
