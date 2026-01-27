#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int m_sum = INT_MIN;
        int c_sum = 0;

        for(int i=0;i<nums.size();i++){
            c_sum+=nums[i];

            if(c_sum>m_sum){
                m_sum=c_sum;
            }
            if(c_sum<0){
                c_sum=0;
            }
        }
        return m_sum;
    }
};

int main(){
    return 0;
}