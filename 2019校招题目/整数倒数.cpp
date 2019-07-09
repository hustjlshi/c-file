#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0] == '-'){
        string tem = s.substr(1, s.size() - 1);
        reverse(tem.begin(), tem.end());
        cout << "-" << tem << endl;
    }
    else{
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
