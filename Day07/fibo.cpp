#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}


// example  n = 5 
//                                fibo(5)
//                          fibo(4) + fibo(3)
//                    fibo(3)+fibo(2) + fibo(2)+fibo(1)
//              fibo(2)+fibo(1)+ 1 + 1 + 0 + 1
//         1 + 1 + 1 + 1 + 0    
// fibonacci of 5 = 5


int main(){
    return 0;
}