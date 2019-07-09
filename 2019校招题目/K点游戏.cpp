#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int tem = 1;
    int k = 0;
    while(tem + k < n){
        k += tem;
        tem++;
        ans++;
    }
    if(tem + k == n){
        cout << ans << endl;
        return 0;
    }
    ans += (n - k) * 2;
    cout << ans << endl;
    return 0;
}
