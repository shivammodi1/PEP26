#include<bits/stdc++.h>
using namespace std;

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

// example:
// Input: root1 = [2,1,4], root2 = [1,0,3]
// Output: [0,1,1,2,3,4]

class Solution {
public:
    void InOrder(TreeNode* root,vector<int>& ans){
        if(!root){
            return;
        }
        InOrder(root->left,ans);
        ans.push_back(root->val);
        InOrder(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        InOrder(root1,ans);
        InOrder(root2,ans);

        sort(ans.begin(),ans.end());
        return ans;
    }
};