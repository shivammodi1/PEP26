// person can climb either 1 step or 2 steps at a time
// for n = 4    1
// person can climib in following ways
// 1 1 1 1
// 1 1 2
// 1 2 1
// 2 1 1
// 2 2

// but if n=1
// output = 1
// if n=2
// output = 2
// if n=3
// output = 3
// if n==0
// output = 1 (stay at the same place)


#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 3;
    }

    return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
    return 0;
}