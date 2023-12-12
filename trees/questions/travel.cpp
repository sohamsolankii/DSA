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
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
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
// zigzag level order 
vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
    if (root == NULL)  return  {};
    
    vector<vector<int>> result;

    queue<TreeNode*> q;
    q.push(root);

    bool b = true;

    while (!q.empty()) {
        int n = q.size();
        vector<int> tmp(n);

        for (int i = 0; i < n; i++) {
            TreeNode* node = q.front();
            q.pop();

            int index = (b) ? i : (n - 1 - i);
            tmp[index] = node->val;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        b = !b;
        result.push_back(tmp);
    }
    return result;
}


// boundray travel of the binary tree
void traverseLeft(Node* root,vector<int>& ans){
        
    // Base Case
    if((root==NULL) || (root->left == NULL && root->right == NULL)) return;
    ans.push_back(root->data);
    
    if(root->left) traverseLeft(root->left,ans);
    else traverseLeft(root->right,ans);
    
}

void traverseLeaf(Node* root,vector<int>& ans){
    
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return;
    }
    
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
    
}

void traverseRight(Node* root,vector<int>& ans){
    
    if((root==NULL) || (root->left == NULL && root->right == NULL)) return;
    if(root->right) traverseRight(root->right,ans);
    else traverseRight(root->left,ans);
    
    // Reverse order mai store karlo
    ans.push_back(root->data);
    
}

vector <int> boundary(Node *root)
{
    vector<int>ans;
    if(root == NULL) return ans;
    ans.push_back(root->data);
    
    // Step1 : Traverse Left Part
    traverseLeft(root->left,ans);
    
    // Step2: Traverse Leaf Nodes
    traverseLeaf(root->left,ans); // Left Subtree
    traverseLeaf(root->right,ans); // Right Subtree
    
    // Step3: Traverse Right Part
    traverseRight(root->right,ans);
    
    return ans; 
}

// vartical order travel 
vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int,map<int,multiset<int>>>m;
    vector<vector<int>>a;

    if(!root)return a;

    queue<pair<TreeNode*,pair<int,int>>>q;
    q.push({root,{0,0}});

    while(q.size()){
        auto x = q.front();
        TreeNode* node=x.first;
        q.pop();
        int val = x.first->val;
        int hd=x.second.first, lvl=x.second.second;
        m[hd][lvl].insert(val);
        if(node->left){
            q.push({node->left,{hd-1,lvl+1}});
        }
        if(node->right){
            q.push({node->right,{hd+1,lvl+1}});
        }
    }

    for(auto i : m){
        vector<int>v;
        for(auto j:i.second){
            for(auto g : j.second)
            v.push_back(g);
        }
        a.push_back(v);
    }
    return a;

}