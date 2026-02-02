#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralPrint(vector<vector<int>> &arr){

    vector<vector<int>> ans;

    int top = 0;
    int bottom = arr.size()-1;
    int left=0;
    int right=arr[0].size()-1;

    while(top<=bottom && left<=right){
        // top
        for(int j=left;i<=right;j++){
            ans.push_back(arr[top][j]);
        }
        top++;

        //right
        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i][right]);
        }
        right--;

        // bottom
        if(top<=bottom){
            for(int j=right;j>=left;j--){
                ans.push_back(arr[bottom][j]);
            }
            bottom--;
        }

        // left
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

}