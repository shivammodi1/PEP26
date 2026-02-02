
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col; 

    vector<vector<int>> arr(row, vector<int>(col)); 
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    
    int ans = INT_MIN;
    int index = -1;
    
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j]
        }
        if(ans<sum){
            ans=sum;
            index=i;
        }
    }
    
    cout<<"Sum is: "<<ans<<"Index is: "<<index<<endl;
    
}