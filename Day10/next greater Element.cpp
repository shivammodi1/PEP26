#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> &arr){
    int n=arr.size();
    stack<int> st;
    vector<int> ans(n,-1);

    for(int i=n-1;i>=0;i--){
        // pop element utill we find greater than top of stack
        while(!st.empty() && arr[i]>=arr[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = arr[st.top()];
        }
        st.push(i);
    }

    return ans;

}

int main(){
    return 0;
}