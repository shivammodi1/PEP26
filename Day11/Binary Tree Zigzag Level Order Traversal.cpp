// Binary Tree Zigzag Level Order Traversal
//                          ->          1
//                                    /   \
//                          <-      2      3
//                                 / \      \
//                          ->    4   5      6

// ans: [[1],[3,2],[4,5,6]]

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> ans;

    if (!root)
    {
        return ans;
    }

    queue<TreeNode *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        int n = q.size();      
        vector<int> tmp;
        while (n--)
        {
            TreeNode *node = q.front();
            q.pop();

            tmp.push_back(node->val);

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        if (level % 2 == 1)
        {
            reverse(tmp.begin(), tmp.end());
        }
        ans.push_back(tmp);
        level++;
    }

    return ans;
}
int main()
{
    return 0;
}