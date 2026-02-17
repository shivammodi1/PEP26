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

 #include<bits/stdc++.h>
 using namespace std;

// Example : Insert at right position in BST of value 5
// Input: root = [4,2,7,1,3], val = 5
// Output: [4,2,7,1,3,5]
//               4                    
//             /   \
//            2      7
//           / \    /
//          1   3  5


class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* node = new TreeNode(val);
            return node;
        }

        if(root->val > val){
            root->left = insertIntoBST(root->left,val);
        }else if(root->val< val){
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }
};

// Appraoch:
// 1. if root is null create newNode then return that node
// 2. if root->val > val than insert value in left side
// 3. if root->val < val than insert value in right side