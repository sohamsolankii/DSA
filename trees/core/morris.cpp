#include<bits/stdc++.h>
using namespace std;

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
    
    
    return 0;
}
vector<int> inorderTraversal(TreeNode* root) {
    // vector<int> nodes;
    // inorder(root, nodes);
    // return nodes;

    vector<int> ans;
    morisTravel(root, ans);
    return ans;
}


TreeNode* getRightMostNode(TreeNode* leftNode, TreeNode* curr){
    while(leftNode->right != nullptr and leftNode->right != curr){
        leftNode = leftNode->right;
    }

    return leftNode;
}

vector<int> morisTravel(TreeNode* node, vector<int> &ans){
    TreeNode* curr = node;

    while(curr != nullptr){
        TreeNode* leftNode = curr->left;

        if(leftNode == nullptr){
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else{
            TreeNode* rightMostNode = getRightMostNode(leftNode, curr);

            if(rightMostNode->right == nullptr){ // thread creat
                rightMostNode->right = curr;
                curr = curr->left;
            }
            else{       // thread cut
                rightMostNode->right = nullptr;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }

    return ans;
}


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        
        TreeNode* cur=root;
        while(cur != NULL){
            if(cur->left){//if left then go the right most part of left tree
                TreeNode* temp=cur->left;
                while(temp->right && temp->right != cur){
                    temp=temp->right;
                }
                
                if(temp->right == cur){//if the left most tree is current node then break link and print and go right
                    temp->right=NULL;
                    inorder.push_back(cur->val);
                    cur=cur->right;
                }else{//else left most node is current and current go to right
                    temp->right = cur;
                    cur=cur->left;
                }
            }else{//if no left just print and go right
                inorder.push_back(cur->val);
                cur=cur->right;
            }
        }
        return inorder;
    }
};
