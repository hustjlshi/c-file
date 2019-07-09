#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    vector<vector<bool>> dp(len, vector<bool>(len, false));
    int max_len = 1;
    int left = 0;
    for(int i = 0; i < len; i++){
        dp[i][i] = true;
    }
    for(int i = 0; i < len - 1; i++){
        if(s[i] == s[i +1]){
            dp[i][i + 1] = true;
            max_len = 2;
            left = i;
        }
    }
    for(int l = 2; l < len; l++){
        for(int i = 0; i + l < len; i++){
            if(dp[i+1][i + l - 1] && s[i] == s[i + l]){
                dp[i][i + l] = true;
                if(l + 1 > max_len){
                    left = i;
                    max_len = l + 1;
                }
            }
        }
    }
    cout << s.substr(left, max_len) << endl;
    return 0;
}

