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

void helper(Node* root,int &count){
    if(!root){
        return;
    }
    // A leaf node is a node that does not have any children (i.e., both left and right pointers are NULL).
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    // Recursively traverse the left and right subtrees to count leaf nodes in the entire tree.
    helper(root->left,count);
    helper(root->right,count);
}

int countLeafNodes(Node* root){
    int count=0;
    if(root==NULL){
        return 0;
    }
    helper(root,count);
    return count;
}

int main(){
    return 0;
}