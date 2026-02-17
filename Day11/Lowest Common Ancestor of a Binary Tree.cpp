// Lowest Common Ancestor of a Binary Tree
// hume binary tree ke 2 nodes ke lowest common ancestor find karna hai
// LCA matlab lowest common ancestor, yani ki dono nodes ke sabse neeche wala common ancestor
// Appraoch: Recursive approach
// LCA find karne ke liye hum recursive approach use karenge:
// 1. Agar current node null hai, to return null
// 2. Agar current node p ya q ke barabar hai, to return current node
// 3. Recursively left aur right subtree me LCA find karo
// 4. Agar left aur right subtree dono me LCA milta hai, to current node hi LCA hai, return current node
// 5. Agar left subtree se result null hain toh return right subtree ka result, warna return left subtree ka result
// 6. Is tarah se hum LCA find kar sakte hain

#include <bits/stdc++.h>
using namespace std;


Node* LCA(Node* root, Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }

    //2. agar hum p yah q node par aa gaye
    if(root==p || root==q){
        return root;
    }

    // 3. left side jao than right side jao
    Node* left = LCA(root->left,p,q);
    Node* right = LCA(root->right,p,q);

    //4. agar left and right both are not null then root is LCA
    if(left!=NULL && right!=NULL){
        return root;
    }

    // 5. agar koi 1 bhi null h toh not null wala return kar do
    if(left==NULL){
        return right;
    }
    
    return left;
    
}