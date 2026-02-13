#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void helper(Node* root,int &count){
    if(!root){
        return;
    }
    count++;
    helper(root->left,count);
    helper(root->right,count);
}

int countNodes(Node* root){
    int count=0;
    if(root==NULL){
        return 0;
    }
    helper(root,count);
    return count;
}

int main(){
    return 0;
}