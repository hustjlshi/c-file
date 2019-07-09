#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    long long sum = 1;
    for(int k = x + y; k > y; k--){
        sum *= k;
    }
    int sum1 = 1;
    for(int k = x; k > 0; k--){
        sum1 *= k;
    }
    cout << sum / sum1 << endl;
    return 0;
}
