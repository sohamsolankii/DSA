#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// inserting node into the BST
Node* insert(Node* root, int key) {
    if (!root) {
        Node *temp = new Node(key);
        return temp;
    }

    if (root->data == key)
        return root;

    if (root->data > key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

// finding minval of the BST
Node* minval(Node* root){
    Node* tmp = root;

    while(tmp->data != NULL){
        tmp = tmp->left;
    }

    return tmp;
}

// finding the inorder successor of the Node x in BST
Node * inOrderSuccessor(Node *root, Node *x){
    Node* successor = nullptr;
    
    while(root){
        if(x->data > root->data){
            root = root->right;
        }
        else{
            successor = root;
            root = root->left;
        }
    }
    
    return successor;
}

// finding inorder predecessor
Node* inOrderPredecessor(Node* root, Node* x) {
    Node* predecessor = nullptr;

    while (root) {
        if (x->data < root->data) {
            root = root->left;
        } 
        else{
            predecessor = root;
            root = root->right;
        } 
    }

    return predecessor;
}

// find ceil in bst
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    int ceil = -1;
    while(root){
        if(input > root->data){
            root = root->right;
        }
        else{
            ceil = root->data;
            root = root->left;
        }
    }
    
    return ceil;
}

// floor of the bst
int floor(Node* root, int x) {
    if(!root) return -1;
    
    int floor = -1;
    while(root){
        if(root->data <= x){
            floor = root->data;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    
    return floor;
}


