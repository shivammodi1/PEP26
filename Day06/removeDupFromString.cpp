#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s)
{
    // code here
    string ans = "";
    int n = s.size();
    vector<int> freq(256, 0);
    for (int i = 0; i < n; i++)
    {
        if (freq[s[i]] == 0)
        {
            ans += s[i];
            freq[s[i]] = 1;
        }
    }
    return ans;
}

int main()
{
    string s = "banana";
    int n = s.length();
    string result = removeDup(s);
    cout << result << endl;
}