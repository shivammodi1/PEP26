#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s,int st,int end){
        while(st<=end){
            if(s[st]!=s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
            }else{
                return isValid(s,st+1,end) || isValid(s,st,end-1);
            }
        }
        return true;
    }
};