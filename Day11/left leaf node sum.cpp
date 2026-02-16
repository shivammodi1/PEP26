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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int c=0;

        // check if left node is leaf node or not
        if(root->left && root->left->left == NULL && root->left->right==NULL){
            c+= root->left->val;
        }
        // if left node is not leaf node then we need to check for left and right node of left node
        c+=sumOfLeftLeaves(root->left);
        c+=sumOfLeftLeaves(root->right);

        // return the sum of left leaf node
        return c;
    }
};

