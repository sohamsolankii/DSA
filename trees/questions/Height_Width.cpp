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

// O(n)
int calHeight(Node* root){
    if(root == nullptr) return 0;

    int leftHeight = calHeight(root->left);
    int rightHeight = calHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

// two leaf vache maximum distance O(n*n)
int diameter(Node* root){
    if(root == nullptr) return 0;

    int leftheigth = calHeight(root->left);
    int rightheight = calHeight(root->right);
    int curretD = leftheigth + rightheight;

    int leftD = diameter(root->left);
    int rightD = diameter(root->right);

    return max({leftD, rightD, curretD});
}

// sort method to find diameter
int longestPath(Node* node){
        int diameter =0;
        if(node == nullptr) return 0;

        int leftPath = longestPath(node->left);
        int rightPath = longestPath(node->right);

        diameter = max(diameter, leftPath + rightPath);
        return max(leftPath, rightPath) + 1;
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

    int dia = diameter(root);
    cout << dia << endl;

    return 0;
}


/* .................................................................... */

// balanced binary tree (height of the two subtree diffrence always <= 1)
bool isBalanced(Node* root) {
    if (root == nullptr) return true;

    int lh = calHeight(root->left);
    int rh = calHeight(root->right);

    if (abs(lh - rh) > 1) {
        return false;
    }

    return isBalanced(root->left) && isBalanced(root->right);
}