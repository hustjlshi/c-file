#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int len = s.size();
    if(n > len || n <= 0){
        cout << -1 << endl;
        return 0;
    }
    cout << s.substr(0, n);
    for(int i = 1; i + n <= len; i++){
        cout << " " << s.substr(i, n);
    }
    cout << endl;
    return 0;
}
