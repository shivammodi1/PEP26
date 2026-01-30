#include<bits/stdc++.h>
using namespace std;

string firstRepeatedString(string s){
    vector<int> freq(26, 0);    
    for(int i=0;i<s.size();i++){
        // agar char pehle se aa chuka hai
        if(freq[s[i]-'a']==1){
            string ans = "";
            ans+=s[i];
            return ans;
        }
        // char not seen before
        freq[s[i]-'a']=1; // marking character as seen
    }
    return "-1";
}

int main(){
    return 0;
}