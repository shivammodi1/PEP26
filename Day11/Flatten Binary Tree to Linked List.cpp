// Flatten Binary Tree to Linked List
// example:
//        1
//      /   \
//     2     5
//    / \     \
//   3   4     6
// After flattening, the tree should look like:
// 1
//  \
//   2
//    \
//     3
//      \
//       4
//        \
//         5
//          \
//           6


// Approach:
// 1. Untill node is exist 
//     1. check left subtree is exist or not
//     2. If left node is not exist then move to right node
//     3. If left node exist then find the rightmost node of left subtree and connect it to right subtree(curr->left = root->right)
//     4. root->right = root->left
//     5. root->left = NULL
//     6. Move to right node

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

void flatten(Node* root){
    while(root){
        // if left is not there then move to right node
        if(!root->left){
            root = root->right;
        }else{
            // find the rightmost node of left subtree
            Node* curr = root->left;
            while(curr->right){
                curr = curr->right;
            }

            curr->right = root->right; // left node ke right most element ko root->right se connect kar diya
            root->right = root->left; // root->right ko root->left se connect kar diya
            root->left  = NULL; // root->left ko NULL kar diya
            root=root->right; // abb root ko right node pe move kar diya
        }
    }
}