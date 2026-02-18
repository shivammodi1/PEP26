// Validate Binary Search Tree
// Given the root of a binary tree, determine if it is a valid binary search tree (BST).
// A valid BST is defined as follows:
// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// example: 
//               1                     5
//             /   \                  / \  ------>  This is valid beacuse every node follow the rules of BST
//            2     3                3   6
//           / \   / \              / \   
//          4   5 6   7            2   4    
// Output: false = beacuse 2 is not less than 1 and 3 is not greater than 1

// Approach:
// Inorder traversal of BST give you sorted array
// So we can do inorder traversal and check if the array is sorted or not
// Time complexity: O(n) where n is the number of nodes in the tree


#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void InOreder(Node* root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    InOreder(root->left, ans);
    ans.push_back(root->data);
    InOreder(root->right, ans);
}

bool isValidBST(TreeNode* root){
    vector<int> ans;
    InOreder(root, ans);
    int n = ans.size();
    for(int i=0;i<n-1;i++){
        if(ans[i] >= ans[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    return 0;
}
