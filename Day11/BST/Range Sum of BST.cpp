#include <bits/stdc++.h>
using namespace std;

//
void helper(TreeNode *root, int l, int h, int &sum)
{
    if (!root)
    {
        return;
    }

    if (root->data >= l && root->data <= h)
    {
        sum += root->data;
    }
    helper(root->left, l, h, sum);
    helper(root->right, l, h, sum);
}

// we can use inorder and store the value in vector
// than calculate sum in between the range
void helper2(TreeNode *root, vector<int> &ans)
{
    if (!root)
    {
        return;
    }
    inOrder(root->left, ans);
    ans.push_back(root->val);
    inOrder(root->right, ans);
}

int rangeSumBST(TreeNode *root, int low, int high)
{
    // method1:
    int sum = 0;
    helper(root, low, high, sum);
    // return sum;

    // method2:
    vector<int> ans;
    helper2(root, ans);
    int sum = 0;
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        if (ans[i] >= low && ans[i] <= high)
        {
            sum += ans[i];
        }
    }
    return sum;
}