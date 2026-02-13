// Tree:-
// It is a non-linear data structure that organizes data in a hierarchical manner.
// It consists of nodes connected by edges, where each node can have zero or atmost two child nodes.

// Terms related to Tree:
// 1. Root: The topmost node of the tree.
// 2. Leaf: A node that does not have any children.
// 3. Parent: A node that has one or more child nodes.
// 4. Sibling: Nodes that share the same parent.
// 5. Height: The number of edges on the longest path from the root to a leaf node.
// 6. Depth: The number of edges from the root to a specific node.
// 7. Subtree: A tree that is a part of another tree, consisting of a node and all its descendants.
// 8. Level: The set of nodes that are at the same depth in the tree.

// Properties of Tree:
// 1. If h = height of the tree,
//   - Maximum Leaves = 2^h
//   - Maximum Nodes = 2^(h+1) - 1
// 2. A binary tree with n nodes has n-1 edges.
// 3. If a binary tree contains m nodes at level l, then the maximum number of nodes at l+1 is 2m.
// 4. Since a binary tree cab contains at most 1 mode at level 0, it can contain at most 2^l nodes at level l.
// (means that the number of nodes at level l is at most 2^l, where l is the level of the tree.)
// 

// Types of Tree:
// 1. Binary Tree: A tree in which each node has at most two children.
// 2. Binary Search Tree: A binary tree in which the value of each node is greater than the values of its left subtree and less than the values of its right subtree.
// 3. AVL Tree: A self-balancing binary search tree where the difference in heights between the left and right subtrees cannot be more than one for any node.
// 4. Full Binary Tree: A binary tree in which every node has either 0 or 2 children and all leaf nodes are at the same level.
// 5. Complete Binary Tree: A binary tree in which all levels are completely filled except possibly the last level, which is filled from left to right.

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




int main(){
    // Creating a simple binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // The tree structure is as follows:
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5

    return 0;
}