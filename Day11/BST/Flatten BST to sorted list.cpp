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

// Appraoch :
// 1. Create a dummy node and a pointer tmp which will point to dummy node
// 2. Do inorder traversal of the BST and add the nodes in dummy node's right and move the tmp pointer to right
// 3. finally return dummy node's right as head of the linked list

// Example:            1
//                   /   \
//                  2     3
// After flattening, the tree should look like:
// 1
//  \
//   2
//    \
//     3



void InOrder(Node* root,Node * &tmp){
    if(!root){
        return;
    }
    InOrder(root->left,tmp);
    // tmp node ke right me node banate jao aur tmp ko right me move karte jao
    tmp->right = new Node(root->data);
    tmp = tmp->right;
    InOrder(root->right,tmp);
}
   
Node *flattenBST(Node *root){
    if(!root){
            return root;
        }  
        
        Node* head = NULL;
        Node* tmp = new Node(-1);
        head = tmp;
        InOrder(root, tmp);
        return head->right; 
}

int main(){
    return 0;
}