#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

string GCDofString(string s,string t){
    if(s+t != t+s){
        return "";
    }

    int n1 = s.size();
    int n2 = t.size();
    // Calculate the GCD of the lengths of the two strings
    int gcdLength = gcd(n1, n2);
    // Return the substring of s from index 0 to gcdLength
    return s.substr(0, gcdLength);
}

int main() {
    // GCD Of Two Numbers
    cout << gcd(6,4);

    // GCD Of String
    string str1 = "ABABAB";
    string str2 = "ABAB";
    string ans = GCDofString(str1, str2);
    cout << ans;
}
