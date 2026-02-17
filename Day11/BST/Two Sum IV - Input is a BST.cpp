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

// In this we have to find the two sum in BST
// if any two nodes sum is equal to k then return true else false

class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &ans)
    {
        if (!root)
        {
            return;
        }

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> ans;
        inorder(root, ans);

        int st = 0;
        int end = ans.size() - 1;

        while (st < end)
        {
            int sum = ans[st] + ans[end];
            if (sum == k)
            {
                return 1;
            }
            else if (sum > k)
            {
                end--;
            }
            else
            {
                st++;
            }
        }
        return 0;
    }
};