#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1=0;
        int p2=0;
        int n=s.size();
        int m=t.size();

        while(p1<n && p2<m){
            if(s[p1]==t[p2]){
                p1++;
                p2++;
            }else{
                p2++;
            }
        }
        if(p1==n){
            return 1;
        }
        return 0;
    }
};