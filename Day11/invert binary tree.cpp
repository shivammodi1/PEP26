// invert binary tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
     void invert(TreeNode* root){
        if(!root){
            return ;
        }
        swap(root->left,root->right); // swap the left and right child of the current node
        invert(root->left); // recursively invert the left subtree
        invert(root->right); // recursively invert the right subtree
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};