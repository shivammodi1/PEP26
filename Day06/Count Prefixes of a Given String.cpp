// Input: words = ["a","b","c","ab","bc","abc"], s = "abc"
// Output: 3
// Explanation:
// The strings in words which are a prefix of s = "abc" are:
// "a", "ab", and "abc".
// Thus the number of strings in words which are a prefix of s is 3.

#include <bits/stdc++.h>
using namespace std;

int countPrefixes(vector<string>& words, string s) {
    int count = 0;
    for (const string& word : words) {
        if (s.substr(0, word.size()) == word) {
            count++;
        }
    }
    return count;
}