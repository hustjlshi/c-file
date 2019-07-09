#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int a;
    while(cin >> a){
        if(a == 0) break;
        arr.push_back(a);
    }
    int len = arr.size();
    unordered_map<int, int> mp;
    int k = 0;
    while(k < len){
        mp[k]++;
        cout << k << endl;
        if(mp[k] >= 2){
            cout << "false" << endl;
            return 0;
        }
        k += arr[k];
    }
    cout << "true" << endl;
    return 0;
}
