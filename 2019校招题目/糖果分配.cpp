#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> suger;
    vector<int> wei;
    int tem;
    while(cin >> tem){
        wei.push_back(tem);
        if(getchar() == '\n') break;
    }
    while(cin >> tem){
        suger.push_back(tem);
        if(getchar() == '\n') break;
    }
    sort(wei.begin(), wei.end());
    sort(suger.begin(), suger.end());
    int i = wei.size() - 1;
    int j = suger.size() - 1;
    int ans = 0;
    while(i >= 0 && j >= 0){
        if(suger[j] >= wei[i]){
            ans++;
            i--;
            j--;
        }
        else{
            i--;
        }
    }
    cout << ans << endl;
    return 0;
}
