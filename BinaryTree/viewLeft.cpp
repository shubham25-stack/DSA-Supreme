#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        } else {
            cout<<temp->data<<" ";

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void printLeftView(Node* root, int level, vector<int>& leftView){
    if(root == NULL) return;

    if(level == leftView.size()){
        leftView.push_back(root->data);
    }

    printLeftView(root->left, level+1, leftView);
    printLeftView(root->right, level+1, leftView);
}

void leftBoundary(Node* root){
    if(root == NULL) return;
    if(root->left || root->right)  // not a leaf
        cout << root->data << " ";
    
    if(root->left) leftBoundary(root->left);
    else if(root->right) leftBoundary(root->right);
}

// Right boundary (bottom-up, exclude leaves)
void rightBoundary(Node* root){
    if(root == NULL) return;
    
    if(root->right) rightBoundary(root->right);
    else if(root->left) rightBoundary(root->left);
    
    if(root->left || root->right)  // not a leaf
        cout << root->data << " ";
}

// Leaf nodes (left -> right)
void printLeaves(Node* root){
    if(root == NULL) return;
    printLeaves(root->left);
    if(!root->left && !root->right)
        cout << root->data << " ";
    printLeaves(root->right);
}

// Boundary traversal
void boundaryTraversal(Node* root){
    if(root == NULL) return;
    
    cout << root->data << " ";       // root
    leftBoundary(root->left);        // left boundary
    printLeaves(root->left);         // leaves left subtree
    printLeaves(root->right);        // leaves right subtree
    rightBoundary(root->right);      // right boundary
}

int main(){

    // 🔥 Hardcoded Tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "PreOrder: ";
    preOrder(root);

    cout << "\n\nLevel Order:\n";
    levelOrderTraversal(root);

    vector<int> leftView;
    printLeftView(root, 0, leftView);

    cout << "\nLeft View: ";
    for(int x : leftView){
        cout << x << " ";
    }

    cout << endl;
    cout<<"Boundry traversal is this"<<endl;
    boundaryTraversal(root);

    return 0;
}