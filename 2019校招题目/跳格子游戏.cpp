#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1) {cout << 1 << endl; return 0;}
    if(n == 2){cout << 2 << endl; return 0;}
    int a = 1;
    int b = 2;
    for(int i = 3; i <= n; i++){
        int tem = a + b;
        a = b;
        b = tem;
    }
    cout << b << endl;
    return 0;
}
