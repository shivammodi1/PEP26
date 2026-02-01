#include<bits/stdc++.h>
using namespace std;


string reverseWords(string s){

    string ans = "";
    int n = s.size();
    reverse(s.begin(), s.end());
    for(int i=0;i<n;i++){
        string word = "";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        if(word.length()>0){
            reverse(word.begin(),word.end());
            ans += " "+word;
        }
        
    }

    return ans.substr(1);
}


// using stack
string reverseWord(string s){
    stack<string> st;
    int n = s.size();
    for(int i=0;i<n;i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word+=s[i];
            i++;
        }
        if(word.length() > 0){
            st.push(word);
        }
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top()+ " ";
        st.pop();
    }
    return ans.substr(0,ans.length()-1);
}

int main(){
    return 0;
}