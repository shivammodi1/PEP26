#include<bits/stdc++.h>
using namespace std;

// top of binary tree
//            1
//         /   \
//        2     3
//      /  \     \
//     4    5     6
// top view of above tree is 4 2 1 3 6
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> topView(Node* root){
    vector<int> ans;
    if(!root){
        return ans;
    }

    map<int,int> mp;
    queue<pair<Node*,int>>q;
    q.push({root,0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int hd = it.second;

        // check hd is already present in map or not
        // agar hd nhi mila than element add krdo map me
        if(mp.find(hd) == mp.end()){
            mp[hd] = node->data;
        }

        if(node->left){
            q.push({node->left,hd-1});
        }
        if(node->right){
            q.push({node->right,hd+1});
        }
    }

    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
    return 0;
}