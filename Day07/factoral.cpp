#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    if(n<=1){
        return 1;
    }
    if(n==2){
        return n;
    }

    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
// example n = 5
//                                 fact(5)
//                              5*fact(4)
//                     5*4*fact(3)
//               5*4*3*fact(2)   
//        5*4*3*2
// 5*4*3*2*1 
// factorial of 5 = 120