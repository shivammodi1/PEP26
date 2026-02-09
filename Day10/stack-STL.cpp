#include<bits/stdc++.h>
using namespace std;



int main(){
    stack<int>st;
    // push operation
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    // pop operation
    st.pop(); // it will remove element from end (LIFO)
    // top 
    st.top(); // it will return the top element of stack
    // isEmpty
    st.empty(); // it will return true if stack is empty    
    // size
    st.size(); // it will return the size of stack

    cout<<endl;

    // iterate over stack
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}