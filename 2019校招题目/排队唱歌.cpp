#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> arr(N, 0);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    vector<int> tem(arr);
    sort(tem.begin(), tem.end());
    int ans = 0;
    for(int i = N - 1; i >= 0; i--){
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == tem[i]){
                ans += i - j;
                arr.erase(arr.begin() + j);
                break;
            }
        }
    }
    cout << ans  << endl;
}
