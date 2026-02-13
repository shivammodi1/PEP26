#include<bits/stdc++.h>
using namespace std;

vector<int> PSE(vector<int> &arr){
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[i]<=st.top()){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    return 0;
}