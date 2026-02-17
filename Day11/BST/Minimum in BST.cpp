/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

// In this we have to find the min val in BST

class Solution {
  public:
    void inorder(Node* root,vector<int> &ans){
        if(!root){
            return ;
        }
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    int minValue(Node* root) {
        // code here
       vector<int> ans;
       inorder(root,ans);
       
       return ans[0];
        
    }
};