#include<bits/stdc++.h>
using namespace std;


int searchIn2DArray(const vector<vector<int>>& arr, int target) {
    int n = arr.size();
    if (n == 0) return -1;
    int m = arr[0].size();
    int left = 0, right = n * m - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;
        // Convert mid to 2D indices , like we have index
        // now we have to find row and column
        int row = mid/arr[0].size();
        int col = mid%arr[0].size();
        int mid_value =  arr[row][col];

        if (mid_value == target) {
            return mid;
        } else if (mid_value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main(){
    int n, m;
    cin >> n >> m; // Input the dimensions of the 2D array
    vector<vector<int>> arr(n, vector<int>(m)); // Declare a 2D array using vector
    // Input elements into the 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target; // Input the target value to search for
    int result = searchIn2DArray(arr, target);
    if (result != -1) {
        cout << "Element found at index (1D representation): " << result << endl;
        cout << "Element found at position (row, column): (" << result / m << ", " << result % m << ")" << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}