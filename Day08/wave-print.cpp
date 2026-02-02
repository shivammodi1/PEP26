#include<bits/stdc++.h>
using namespace std;

// example 
// [[1,2,3],[4,5,6],[7,8,9]]
// output: [
//      [1,4,7]
//      [8,5,2]
//      [3,6,9]
// ]

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }else{
             for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}