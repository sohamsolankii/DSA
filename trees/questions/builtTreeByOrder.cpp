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

// using inorder and postorder
 class Solution {
TreeNode* construct(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int poStart, int poEnd, unordered_map<int,int>& index) {
        if (inStart > inEnd || poStart > poEnd) {
            return nullptr;
        }

        int rootVal = postorder[poEnd];
        TreeNode* root = new TreeNode(rootVal);

        int inorderRootIndex = index[rootVal];
        int leftSubtreeSize = inorderRootIndex - inStart;

        root->left = construct(inorder, postorder, inStart, inorderRootIndex - 1, poStart, poStart + leftSubtreeSize - 1, index);
        root->right = construct(inorder, postorder, inorderRootIndex + 1, inEnd, poStart + leftSubtreeSize, poEnd - 1, index);

        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> index;

        for (int i = 0; i < inorder.size(); i++) {
            index[inorder[i]] = i;
        }
        return construct(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1, index);
    }
};


// using inorder and preorder
class Solution {
TreeNode* construct(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int  inStart,int inEnd,map<int,int>& mp){

    if(preStart > preEnd || inStart > inEnd) return nullptr;

    TreeNode* node = new TreeNode(preorder[preStart]);

    int inRoot = mp[node->val];
    int left = inRoot - inStart;

    node->left = construct(preorder, preStart+1, preStart+left,inorder,inStart,inRoot-1,mp);
    node->right = construct(preorder,preStart+left+1, preEnd,inorder,inRoot+1,inEnd,mp);

    return node;
}
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preStart = 0, preEnd = preorder.size() - 1;
        int inStart = 0, inEnd = inorder.size() - 1;

        map <int, int> mp;
        for(int i = 0 ; i < inorder.size(); i++ ) mp[inorder[i]] = i;

        return construct(preorder, preStart, preEnd, inorder, inStart, inEnd, mp);        
    }
};