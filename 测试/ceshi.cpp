
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    vector<int> dp(w + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        for(int j = w; j - a >= 0; j--){
            dp[j] += dp[j - a];
        }
    }
    long long sum = 0;
    for(int i = 0; i < w + 1; i++){
        sum += dp[i];
    }
    cout << sum << endl;
    return 0;
}
