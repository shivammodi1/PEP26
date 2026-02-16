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
    int helper(TreeNode* root, int &sum){
        if(!root){
            return 0;
        }
        // check if left node is leaf node then add it to sum
        if( root->left && !root->left->left && !root->left->right){
        sum += root->left->val;
        }
        // if left node is not leaf node then we need to go to left and right subtree
        int left = helper(root->left,sum);
        int right = helper(root->right,sum);

        return right + left; // return the sum of left and right subtree

    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        int sum=0;
        helper(root,sum);
        return sum;
    }
};