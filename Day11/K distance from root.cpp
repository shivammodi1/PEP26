// K distance from root
// example :
//       1
//     /   \
//    2     3
//   / \    \
//  4   5    6
// k=2
// output : 4 5 6

// print all nodes at k level from root
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

vector<int> kDistance(Node *root, int k)
{
    vector<int> ans;

    if (!root)
    {
        return ans;
    }

    // 1 queue bana lenge jiske ander pair<Node* int> store hoga lvl and node store hoga
    queue<pair<Node *, int>> q;
    q.push({root, 0}); // root node and level 0 push krdo

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *node = it.first;
        int lvl = it.second;

        // agar uss k lvl par aa gaye tab push into vector
        if (lvl == k)
        {
            ans.push_back(node->data);
        }

        if (node->left)
        {
            q.push({node->left, lvl + 1});
        }
        if (node->right)
        {
            q.push({node->right, lvl + 1});
        }
    }
    return ans;
}

// using 2d array
vector<int> Kdistance(Node *root, int k)
{
    // Your code here
    vector<vector<int>> ans;

    vector<int> res;
    if (root == NULL)
        return res;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();
        vector<int> tmp;

        for (int i = 0; i < n; i++)
        {

            Node *node = q.front();
            q.pop();

            tmp.push_back(node->data);

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }

        ans.push_back(tmp);
    }

    if (k < ans.size())
        return ans[k];

    return res;
}

int main()
{
    return 0;
}