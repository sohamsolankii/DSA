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

    vector<int> v = rightSideView(root);
    for(auto it : v) cout << it << " ";

    
    return 0;
}


/* .................................................................... */

// left size mate i == 0
vector<int> rightSideView(Node* root) {
    vector<int> ans;
    if(root == nullptr) return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* current = q.front();
            q.pop();

            if(i == n - 1){  // Changed this condition
                ans.push_back(current->data);
            }

            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
    }
    return ans;
}

vector<int> topView(Node *root){
    if(root == nullptr) return {};
    map<int,int> mp;

    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()){
        Node* tmp = q.front().first;
        int value = q.front().second;
        q.pop();

        if(mp[value] == 0) mp[value] = tmp->data;
        
        if(tmp->left) q.push({tmp->left, value-1});
        if(tmp->right) q.push({tmp->right, value+1});

    }

    vector<int> ans;
    for(auto it : mp) ans.push_back(it.second);

    return ans;
}

vector <int> bottomView(Node *root) {
    if(root == nullptr) return {};
    map<int,int> mp;

    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()){
        Node* tmp = q.front().first;
        int value = q.front().second;
        q.pop();

        mp[value] = tmp->data;
        
        if(tmp->left) q.push({tmp->left, value-1});
        if(tmp->right) q.push({tmp->right, value+1});

    }

    vector<int> ans;
    for(auto it : mp) ans.push_back(it.second);

    return ans;
}