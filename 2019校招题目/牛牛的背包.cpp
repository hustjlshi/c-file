#include<bits/stdc++.h>
using namespace std;
void dfs(int w, int sum, int i, int &ans,vector<int> arr){
    ans++;
    if(i == arr.size())
        return;
    for(int j = i; j < arr.size(); j++){
        if(sum + arr[j] <= w){
            dfs(w, sum + arr[j], j + 1, ans, arr);
        }
    }
}
int main(){
    int n, w;
    cin >> n >> w;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    int ans = 0;
    dfs(w, 0, 0, ans, arr);
    cout << ans << endl;
    return 0;
}
