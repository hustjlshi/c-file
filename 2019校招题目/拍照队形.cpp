#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();//忽略一个字符，这里忽略了\n;
    getline(cin, s);
    int k = (n - 1) / 3;
    int i = 0;
    for(int j = 0; j < k; j++){
        string left(j, ' ');
        cout << left ;
        string mid(2 * k - 2 * j - 1, ' ');
        cout << s[i++];
        cout << mid;
        cout << s[i++] << endl;
    }
    string tem(k, ' ');
    while(i < n){
        cout << tem << s[i++] << endl;
    }
    return 0;
}
