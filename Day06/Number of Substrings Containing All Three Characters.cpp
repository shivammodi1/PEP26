// Given a string s consisting only of characters a, b and c.
// Return the number of substrings containing at least one occurrence of all these characters a, b and c.
// Example 1:
// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "
// abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again).
int numberOfSubstrings(string s)
{
    int n = s.size();
    int count = 0;//yeh count karega ki kitne substrings hai jisme a,b,c teeno characters hai

    for(int i=0;i<n;i++){
        int a=0,b=0,c=0; // yeh variables check karenge ki kya current substring me a,b,c characters hai ya nahi, agar hai toh unki value 1 ho jayegi   
        for(int j=i;j<n;j++){
            if(s[j]=='a'){
                a=1;
            }
            if(s[j]=='b'){
                b=1;
            }
            if(s[j]=='c'){
                c=1;
            }
            if(a==1 && b==1 && c==1){
                count++;
            }
        }
    }
    return count;
}