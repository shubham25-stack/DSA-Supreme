#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    vector<Node*> children;
    Node(int val) : data(val) {}
};

Node* createNode(int val) {
    return new Node(val);
}

void addChild(Node* parent, Node* child) {
    if (parent) parent->children.push_back(child);
}

void printTree(Node* root, int level = 0) {
    if (!root) return;
    for (int i = 0; i < level; ++i) cout << "  ";
    cout << root->data << '\n';
    for (Node* c : root->children) printTree(c, level + 1);
}

void deleteTree(Node* root) {
    if (!root) return;
    for (Node* c : root->children) deleteTree(c);
    delete root;
}

int main() {
    Node* root = createNode(1);
    Node* n2 = createNode(2);
    Node* n3 = createNode(3);
    Node* n4 = createNode(4);

    addChild(root, n2);
    addChild(root, n3);
    addChild(root, n4);

    addChild(n2, createNode(5));
    addChild(n2, createNode(6));
    addChild(n4, createNode(7));

    cout << "Generic tree (pre-order):\n";
    printTree(root);

    deleteTree(root);
    return 0;
}