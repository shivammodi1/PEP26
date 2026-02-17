#include <bits/stdc++.h>
using namespace std;

// Example : Insert at right position in BST of value 5
// Input: root = [4,2,7,1,3], val = 5
// Output: [4,2,7,1,3,5]
//               4
//             /   \
//            2      7
//           / \    /
//          1   3  5

// Appraoch:
// 1. if root is null create newNode then return that node
// 2. if root->val > val than insert value in left side
// 3. if root->val < val than insert value in right side

class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        // if root is null create newNode then return that node
        if (!root)
        {
            TreeNode *node = new TreeNode(val);
            return node;
        }

        // root->data is greater than val than insert value in left side
        if (root->val > val)
        {
            root->left = insertIntoBST(root->left, val);
        }
        // root->data is less than val than insert value in right side
        else if (root->val < val)
        {
            root->right = insertIntoBST(root->right, val);
        }
        // return the root node
        return root;
    }
};
