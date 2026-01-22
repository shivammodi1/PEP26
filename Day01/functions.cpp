#include<bits/stdc++.h>
using namespace std;


// void function
void greet(){
    cout<<"Hello, World!"<<endl;
}

// non-void function
int add(int a, int b){
    return a + b;
}

float subtract(float x, float y){
    return x - y;
}

int main(){
    greet(); // Calling void function

    int sum = add(5, 7);
    cout<<"Sum: "<<sum<<endl;

    float difference = subtract(10.5, 4.2); 
    cout<<"Difference: "<<difference<<endl;

    return 0;
}  