#include <bits/stdc++.h>
using namespace std;

// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.

// Approach:
// 1. First we nned to fiund Next Smaller Element and Previous Smaller Element for histogram
// 2. Then at each index we can find area = H[i]*(NSE[i] - PSE[i] -1) .
// this will give you the area of that index as height of rectangle will be H[i] and width will be NSE[i] - PSE[i] -1 (we need to subtract 1 because we are not including the current index in width)
// 3. Finally we need to find the maximum area among all the areas calculated in step 2.





int largestRectangleArea(vector<int> &H)
{
    
    int n=H.size();
    vector<int>NSE(n,n);
    vector<int>PSE(n,-1);

    stack<int> st;

    // next smaller element
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && H[i]<=H[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            NSE[i] = st.top();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    // previous smaller element
    for(int i=0;i<n;i++){
        while(!st.empty() && H[i]<=H[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            PSE[i] = st.top();
        }
        st.push(i);
    }

    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        int area = H[i] * (NSE[i] - PSE[i] - 1);
        ans = max(ans,area);
    }

    return ans;
    
}

int main()
{
    return 0;
}