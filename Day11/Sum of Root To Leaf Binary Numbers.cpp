#include <bits/stdc++.h>
using namespace std;

// sum of root to leaf binary numbers
// we are given a binary tree where each node contains a binary digit (0 or 1 ). We need to find the sum of all the root-to-leaf paths in the binary tree, where each path represents a binary number formed by concatenating the digits from the root to the leaf.

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


// Approach:
// 1. Traverse the the tree till leaf node and just concat thw value of the node to the string.
// 2. Once you reached the leaf node then push into the vector of string.
// 3. At the end we have all the possble paths from root to leaf in the vector.
// 4. Now just traverse the vector and covert the binary string to decimal integer using sto(string, nullptr,2) and add to the total sum.
// Time complexity : O(n) where n is the number of nodes in the binary tree.
// Space complexity : O(n) for the vector of string to store all the paths from root to leaf in the binary tree.


// Important :
// Decimal to Binary string : = format("{:b}", n) where n is the decimal number we want to convert to binary string.
// Binary string to Decimal : stoi(s, nullptr, 2) where s is the binary string and 2 is the base of the number system we want to convert from.

void helper(Node* root,string s,vector<string> & path){
    if(!root){
        return;
    }

    if(!root->left && !root->right){
        s += to_string(root->data);
        path.push_back(s);
        return;
    }

    s+= to_string(root->data);
    helper(root->left,s,path);
    helper(root->right,s,path);

}



int sumRootToLeaf(Node *root, int sum)
{
    if(!root){
        return 0;
    }
    string s = "";
    vector<string> paths;

    helper(root, s, paths);

    int total = 0;
   for(int i=0;i<paths.size();i++){
    total += stoi(paths[i],nullptr,2); // change the bnary string to decimal integer
   }
    return total;
}

int main()
{
    return 0;
}