#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;

    if(!root){
        return ans;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        vector<int> tmp;
        while(n--){
            Node* node = q.front();
            q.pop();
            tmp.push_back(node->data);

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        // push tmp into ans 
        ans.push_back(tmp);
    }

    return ans;
}

//  lvl 0             1
//                  /   \
//  lvl 1          2     3
//                / \     \
//  lvl 2        4   5     6
// ans: [{1},{2,3},{4,5,6}]

int main(){
    return 0;
}