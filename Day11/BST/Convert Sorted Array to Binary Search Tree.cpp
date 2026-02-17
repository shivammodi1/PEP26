#include<bits/stdc++.h>
using namespace std;


class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Example :
// Input: nums = [-10,-3,0,5,9]                                                   0
// st = 0,  end = 4                                                             /   \ 
// mid = 2   -> newNode = 0                                                    -10    5
// left part : st = 0, end = 1, mid = 0 -> newNode = -10                        \      \
// right part : st = 3, end = 4, mid = 3 -> newNode = 5                         -3      9
// Output: [0,-10,5,null,-3,null,9]

TreeNode* Helper(vector<int>& nums,int st,int end){
    if(st>end){
        return NULL;
    }

    int mid=st+(end-st)/2;
    TreeNode* newNode = new TreeNode(nums[mid]);

    // left part
    newNode->left = Helper(nums,st,mid-1);
    // right part
    newNode->right = Helper(nums,mid+1,end);

    // return the new node
    return newNode;
}

TreeNode* sortedArrayToBST(vector<int> &nums){
    int st=0;
    int end=nums.size()-1;
    TreeNode* newNode = Helper(nums,st,end);
    return newNode;
}

int main(){
    vector<int> nums = {-10,-3,0,5,9};
    TreeNode* root = sortedArrayToBST(nums);
    return 0;
}