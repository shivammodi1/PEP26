// Balanced Binary Tree -:
// For bnary tree is balanced if for every node the heoght difference btw left and right subtree is not more than 1
// height(left) - height(right) <= 1 

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Approach:
// 1. During calculating the height of the tree, we can also check if the tree is balanced or not.
// 2. if left - right >1 hten make valid = 0 and return the height of the tree as usual
// 3. finally return the valid variable which will be 1 if the tree is balanced and 0 if it is not balanced
// time complexity -: O(n) where n is the number of nodes in the tree

int height(Node* root,int &valid){
    if(!root){
        return 0;
    }

    int left = height(root->left,valid);
    int right = height(root->right,valid);

    if(abs(left-right)>1){
        valid = 0;
    }
    return 1+max(left,right);
}

bool isBalanced(Node *root){
    if(!root){
        return 1;
    }

    int valid = 1;
    height(root,valid);
    return valid;
}

int main(){
    return 0;
}