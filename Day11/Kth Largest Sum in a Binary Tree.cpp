#include<bits/stdc++.h>
using namespace std;

long long kthLargestLevelSum(Node* root, int k){
    vector<long long> ans;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        long long sum=0;
        while(n--){
            Node* node = q.front();
            q.pop();

            sum+=node->val;

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        ans.push_back(sum);
    }

    sort(ans.begin(),ans.end());
    int n=ans.size();
    if(k> n){
        return -1;
    }
    return ans[n-k];
}

int main(){
    return 0;
}