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

Node* searchBST(Node* root, int key){
    if(!root){
        return NULL;
    }

    if(root->data==key){
        return root;
    }
    
    if(root->data > key){
        return searchBST(root->left,key);
    }else{
        return searchBST(root->right,key);
    }
    return root;
}

int main(){

}