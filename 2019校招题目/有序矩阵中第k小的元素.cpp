#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> k >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int a;
    int i = 0;
    int j;
    while(i < n){
        j = 0;
        while(cin >> a){
            arr[i][j] = a;
            cout << arr[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    if(n * (n + 1) >= 2 * k){
        int tem = 1;
        while(tem * (tem + 1) < 2 * k){
            tem++;
        }
        i = 0;
        j = tem - 1;
        tem = tem * (tem - 1);
        while(tem < k * 2){
            tem++;
            i++;
            j--;
        }
        cout << arr[i][j] << endl;
    }
    else{
        int tem = n * (n + 1) / 2;
        a = n - 1;
        while(tem < k){
            tem += a;
            a--;
        }
        a++;
        tem -= a;
        i = n - a;
        j = n - 1;
        tem++;
        while(tem < k){
            i++;
            j--;
            tem++;
        }
        cout << arr[i][j] << endl;
    }
    return 0;
}
