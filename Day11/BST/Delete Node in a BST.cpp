#include <bits/stdc++.h>
using namespace std;

class TreeNode
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

// Step 1: Find the node to be deleted using BST comparison
//         if key < root → go left
//         if key > root → go right
//         if equal → node found

// Step 2: Restructure the tree while preserving BST property

// There are three cases:

// Case 1: Node has NO children (leaf node)
//         → delete the node directly
//         → return NULL to its parent

// Case 2: Node has ONE child
//         → replace the node with its only child
//         → return child node to parent

// Case 3: Node has TWO children
//         → to maintain BST order:
//            find the rightmost element in left subtree
//            (i.e., inorder predecessor)
//         → copy its value into the node
//         → delete that predecessor node from left subtree

// Time complexity: O(h) where h is the height of the tree (O(log n) for balanced BST, O(n) for skewed BST)

TreeNode *deleteNode(TreeNode *root, int key)
{
    if(!root){
        return NULL;
    }
    if(key < root->data){
        root->left = deleteNode(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteNode(root->right,key);
    }else{
        // case 1: no children
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // case 2: One child
        if(!root->left){
            TreeNode* tmp = root->right;
            delete root;
            return tmp;
        }
        if(!root->right){
             TreeNode* tmp = root->left;
            delete root;
            return tmp;
        }

        // case 3: two children
        TreeNode* child = root->left;
        while(child->right){
            child = child->right;
        }
        root->data = child->data; // copy the predecessor's value to current node
        root->left = deleteNode(root->left, child->data); // delete the predecessor node
        return root;
    }

    return root;

}

int main()
{
    return 0;
}