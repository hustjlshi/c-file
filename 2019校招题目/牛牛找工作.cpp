#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    vector<int> arr(m, 0);
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        mp[a] = max(mp[a], 0);
        arr[i] = a;
    }
    auto ite = mp.begin();
    int tem = 0;
    for(; ite != mp.end(); ite++){
        tem = max(ite -> second, tem);
        ite -> second = tem;
    }
    for(int i = 0; i < m; i++){
        cout << mp[arr[i]] << endl;
    }
    return 0;
}
