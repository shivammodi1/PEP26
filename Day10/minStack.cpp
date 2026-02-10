#include<bits/stdc++.h>
using namespace std;

class MinStack{
    public:
    stack<pair<int,int>> st;
    
    MinStack(){
    }

    // to push in stack
    void push(int x){
        if(st.empty()){
            // first->current value
            // second->minimum element
            st.push({x,x});
        }else{
            int curr_min = st.top().second;
            int mini = min(x,curr_min);
            st.push({x,mini}); 
        }
    }

    // remove element from stack
    void pop(){
        if(st.empty()){
            cout<<"stack under-flow"<<endl;
            return;
        }
        st.pop(); 

    }

     int peek() {
        if(st.empty()){
            cout<<"stack is empty"<<endl;
            return ;
        }
        int ans = st.top().first;
        return ans;
    }

    // Check if stack is empty
    bool isEmpty() {
        return st.empty();
    }

    // minimum element method
    int getMin(){
        if(st.empty()){
            return -1;
        }
        return st.top().second;
    }

};

int main(){
    return 0;
}