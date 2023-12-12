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

int countNode(Node* root){
    if(root == nullptr) return 0;
    
    int ans = countNode(root->left) + countNode(root->right) + 1;
    return ans;
}
int sumNodes(Node* root){
    if(root == nullptr) return 0;
    
    int ans = countNode(root->left) + countNode(root->right) + root->data;
    return ans;
}
int countLeafNode(Node* root){
    if(root == nullptr) return 0; 
    if(root->left == nullptr and root->right == nullptr) return 1;
    
    int ans = countLeafNode(root->left) + countLeafNode(root->right);
  
    return ans;
}
// count leaf node in diffrent manner
void inorder(Node* root, int &count) {
    //base case
    if(root == NULL) return ;

    inorder(root->left, count);
   	
    //leaf node
    if(root->left == NULL && root->right == NULL) {
        count++;
    }
    
    inorder(root->right, count);

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



// sum replace - change tree node value to the their child node values
void sumReplace(Node* root){
    if(!root) return;

    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left) root->data += root->left->data;
    if(root->right) root->data += root->right->data;
} // O(n) TC
