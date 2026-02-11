// Reverse first K of a Queue
#include<bits/stdc++.h>
using namespace std;

queue<int> reverseFirstK(queue<int> q, int k){
    int n = q.size();
    if(k>n) return q;

    int temp = k;
    stack<int> st;
    // push k elements in stack
    while(k-- && !q.empty()){
        st.push(q.front());
        q.pop();
    }

    // push back the elements from stack to queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    // push the remaining elements to back of queue
    for(int i=0;i<n-temp;i++){
        q.push(q.front());
        q.pop();
    }
    return q;
}