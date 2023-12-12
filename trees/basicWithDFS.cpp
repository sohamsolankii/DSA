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

// print tree in preorder(data, left, right) recursively
void printTree(Node* root){
    if(root == nullptr) return;

    cout << root->data << " " << " ";
    printTree(root->left);
    printTree(root->right);
}

void printLevelOrder(Node* root){
    if(root == nullptr) return;
    
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            cout << endl;
            if(!q.empty()) { 
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

// find the sum of the node at kth level 0base idxing
int sumAtK(Node* root, int k){
    if(root == nullptr) return -1;

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    int level = 0, sum =0;

    while(!q.empty()){
        Node* tmp = q.front();
        q.pop();

        if(tmp != nullptr){
            if(level == k){
                sum += tmp->data;
            }
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
            
        }
        else if(!q.empty()){
            q.push(nullptr);
            level++;
        }
    }

    return sum;
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

    // printTree(root);

    printLevelOrder(root);
    int level = sumAtK(root,3);
    cout << level << endl;


    
    return 0;
}

/*
    dfs prioritize depth search raw search kre
        preorder (data, left, right)
        inorder (left, data, right)
        postorder (left, right, data)

    bfs priotie width search cloumn type

*/