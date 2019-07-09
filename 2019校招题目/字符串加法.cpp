#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, ans;
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    int i = len1 - 1;
    int j = len2 - 1;
    int jin = 0;
    while(i >= 0 && j >= 0){
        if((s1[i] == '1') && (s2[j] == '1')){
            if(jin == 0){
                jin = 1;
                ans += '0';
            }
            else{
                jin = 1;
                ans += '1';
            }
        }
        else if(s1[i] == '0' && s2[j] == '0'){
            if(jin == 1){
                ans += '1';
                jin = 0;
            }
            else{
                ans += '0';
            }
        }
        else{
            if(jin == 1){
                jin = 1;
                ans += '0';
            }
            else{
                jin = 0;
                ans += '1';
            }
        }
        i--;
        j--;
    }
    while(i >= 0){
        if(s1[i] == '1'){
            if(jin == 1){
                ans += '0';
                jin = 1;
            }
            else{
                ans += '1';
                jin = 0;
            }
        }
        else{
            if(jin == 1){
                ans += '1';
            }
            else{
                ans += '0';
            }
            jin = 0;
        }
        i--;
    }
    while(j >= 0){
        if(s2[j] == '1'){
            if(jin == 1){
                ans += '0';
                jin = 1;
            }
            else{
                ans += '1';
                jin = 0;
            }
        }
        else{
            if(jin == 1){
                ans += '1';
            }
            else{
                ans += '0';
            }
            jin = 0;
        }
        j--;
    }
    if(jin == 1){
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
