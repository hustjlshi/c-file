#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    vector<int> dp(len + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 1; i < len; i++){
        if(s[i] == '0'){
            dp[i + 1] = dp[i - 1];
        }
        else if(s[i] - '0' <= 6 && s[i - 1] == '2'){
            dp[i + 1] = dp[i] + dp[i - 1];
        }
        else if(s[i - 1] == '1'){
            dp[i + 1] = dp[i] + dp[i - 1];
        }
        else{
            dp[i + 1] = dp[i];
        }
        cout << dp[i + 1] << endl;
    }
    return 0;
}

