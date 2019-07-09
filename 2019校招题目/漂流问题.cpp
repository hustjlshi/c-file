#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int tem;
    while(cin >> tem){
        arr.push_back(tem);
        if(getchar() == '\n') break;
    }
    int limit;
    cin >> limit;
    int ans = 0;
    int i = 0;
    int j = arr.size() - 1;
    sort(arr.begin(), arr.end());
    while(i <= j){
        if(arr[i] + arr[j] <= limit){
            ans++;
            i++;
            j--;
        }
        else{
            ans++;
            j--;
        }
    }
    cout << ans << endl;
    return 0;
}


