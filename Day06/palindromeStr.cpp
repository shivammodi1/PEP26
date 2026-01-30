#include<bits/stdc++.h>
using namespace std;

bool isPali(string s){
    int n=s.length();

    int st = 0;
    int end = n-1;
    while(st<=end){
        if(s[st]!=s[end]){
            return false;
        }
        st++;
        end--
    }

    return true;
}

int main(){
    return 0;
}