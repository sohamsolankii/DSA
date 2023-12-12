#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* creatNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;

    return newNode;
}
signed main()
{
    // level 1
    Node* root = creatNode(1);

    // level 2
    root->left = creatNode(2);
    root->right = creatNode(3);

    // level 3
    root->left->left = creatNode(4);
    root->left->right = creatNode(5);
    root->right->left = creatNode(6);
    root->right->right = creatNode(7);

    // level 4
    root->left->right->left = creatNode(9);
    root->right->right->left = creatNode(25);

    return 0;
}


/* .................................................................... */