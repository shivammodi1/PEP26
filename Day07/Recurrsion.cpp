//  Recurrsion
#include<bits/stdc++.h> 
using namespace std;

// n to till 1
void function1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    function1(n-1);
    
}

// 1 to till n
void func2(int n){
    if(n==0){
        return;
    }
    func2(n-1);
    cout<<n<<" ";
}

// 1 to 10
void function3(int n){
    if(n==10){
        return;
    }
    cout << n << " ";
    function3(n+1);
}

// 10 to 1
void function4(int n){
    if(n==10){
        return;
    }
    function4(n+1);
    cout << n << " ";
}

int main(){
    int n;
    cin>>n;
    function1(n);
    cout<<endl;
    func2(n);
    cout<<endl;
    function3(1);
    cout<<endl;
    function4(1);
    return 0;
}