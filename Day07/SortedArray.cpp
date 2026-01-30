#include<bits/stdc++.h>
using namespace std;


bool isSorted(vector<int>& arr,int p1,int p2){
    if(p1==arr.size()-1){
        return true;
    }
    if(arr[p1]<=arr[p2]){
        return isSorted(arr,p1+1,p2+1);
    }
    else{
        return false;
    }
}

// sum of array's elements
void sumArray(vector<int> &arr,int n,int index,int &sum){
    if(index==n){
        return;
    }
    sum += arr[index];
    sumArray(arr,n,index+1,sum);
}

int main(){
    return 0;
}

// example arr = {1,2,3,4,5}
// isSorted(arr,0,1)
//                                 isSorted(arr,0,1)
//                          isSorted(arr,1,2) 
//                   isSorted(arr,2,3)
//           isSorted(arr,3,4)
//  isSorted(arr,4,5)
// returns true

