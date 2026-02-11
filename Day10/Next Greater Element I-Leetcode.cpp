#include<bits/stdc++.h>
using namespace std;



// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans1(n1,-1);
        // unorederedmap store [elemenet : next greater element]
        unordered_map<int,int> ans2;

        stack<int>st;

        // finding next greater element for each element in nums2 and storing in ans2
        for(int i=n2-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=st.top()){
                st.pop();
            }
            if(!st.empty()){
                ans2[nums2[i]] = st.top();
            }else{
                ans2[nums2[i]] = -1;
            }
            st.push(nums2[i]);
        }

        for(int i=0;i<n1;i++){
            ans1[i]=ans2[nums1[i]];
        }
        
        return ans1;

    }
};