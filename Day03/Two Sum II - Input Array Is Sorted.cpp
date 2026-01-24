#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int st = 0;
    int end = nums.size()-1;
    vector<int> ans(2,-1);
    int sum = 0;
    while(st<end){
        sum = nums[st] + nums[end];
        if(sum==target){
            return {st+1, end+1};
        }else if(sum > target){
            end--;
        }else{
            st++;
        }
    }
    return ans;
}

int main()
{
    return 0;
}