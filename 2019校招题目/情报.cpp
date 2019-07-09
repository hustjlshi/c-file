#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> dp(n, 0);
        for(int i = 0; i < n; i++){
            cin >> dp[i];
        }
        vector<vector<int>> mp(n, vector<int>(n, INT_MAX));
        for(int i = 0; i < m; i++){
            int a, b, c;
            cin >> a >> b >> c;
            mp[a][b] = c;
        }

    }

    return 0;
}
