#include <bits/stdc++.h>
using namespace std;

class Node
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// this is for finding the sum of all the nodes in the binary tree
int sumBT(Node *root)
{
    if (!root)
    {
        return 0;
    }

    int left = sumBT(root->left);
    int right = sumBT(root->right);

    return left + right + root->data;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// But if sum become negative so we need to find subtree with maximum sum
int helper(Node *root, int &sum)
{
    if (!root)
    {
        return 0;
    }

    // Correct negative values handling
    int left = max(0, helper(root->left, sum));
    int right = max(0, helper(root->right, sum));

    // Always update sum, even if one or both children are null
    sum = max(sum, root->data + left + right);

    // Return the value of the current node plus the larger of the two subtrees
    return root->data + max(left, right);
}

int maxSum(Node *root)
{
    int sum = 0;
    if (!root)
    {
        return 0;
    }
    helper(root, sum);
    return sum;
}

// example:
//                   -10
//                  /   \
//                 2    13
//                / \   / \
//               4   5 6   7
// output: 13+6+7 = 26

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////