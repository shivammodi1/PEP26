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

// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. 
// (i.e., "ace" is a subsequence of "abcde" while "aec" is not).