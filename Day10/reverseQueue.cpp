#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q,int n, int c){
    if(c==n-1){
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q,n,c+1);
    q.push(x);

}

void reverseQueue(queue<int> &q){
    int n=q.size();
    reverse(q,n,0);
}

int main(){
    return 0;
}