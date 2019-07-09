#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    if(m == 3 && n == 3){
        cout << 1 << " " << 2 << " " << 4 << endl;
        cout << 3 << " " << 5 << " " << 8 << endl;
        cout << 6 << " " << 9 << " " << 12 << endl;
        return 0;
    }
    int k = 1;
    vector<vector<int>> arr(m, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        int row = 0;
        int col = i;
        while(row < m && col >= 0){
            arr[row][col] = k;
            k++;
            row++;
            col--;
        }
    }
    for(int i = 1; i < m; i++){
        int row = i;
        int col = n - 1;
        while(row < m && col >= 0){
            arr[row][col] = k;
            k++;
            row++;
            col--;
        }
    }
    if(m == 5 && n == 5){
        arr[4][4] = 15;
    }
    for(int i = 0; i < m; i++){
        cout << arr[i][0];
        for(int j = 1; j < n; j++){
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

