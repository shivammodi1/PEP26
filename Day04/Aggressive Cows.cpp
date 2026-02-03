#include<bits/stdc++.h>
using namespace std;

int aggressiveCows(vector<int>& stalls, int k){
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int st = 0;
    int end = stalls[n-1] - stalls[0];
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2; // mid is shows the minimum distance we are checking
        int cow=1; // we can place first cow at first stall
        int lastPos = stalls[0];
        for(int i=1;i<n;i++){
            // check if current cow can be placed at stalls[i] with min distance = mid
            if(stalls[i]-lastPos >= mid){
                cow++;
                lastPos = stalls[i];
            }
        }

        if(cow>=k){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    return 0;
}

// input : [1,2,,4,8,9] k=3
// output : 4
// place 3 cows in stalls such that the minimum distance between any two cows is maximized


// Approach:
// sort the array 
// st = 0;
// end = a[n-1]-arr[0]
// than do binary search on the distance from st to end
// for mid = (st+end)/2
// check if its possible to place cows with min distance = mid
// if possible then ans = mid and st = mid+1
// else end = mid-1

