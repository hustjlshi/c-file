#include<bits/stdc++.h>
using namespace std;
bool fb(unordered_map<int, int> mp){
    auto ite = mp.begin();
    for(; ite != mp.end(); ite++){
        if(ite -> second == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    auto ite = mp.begin();
    for(; ite != mp.end(); ite++){
        ite -> second = 0;
    }
    int ans = n;
    int k = mp.size();
    for(int i = 0; i < k; i++){
        mp[arr[i]]++;
    }
    int left = 0;
    int right = k;
    while(right < n){
        if(fb(mp)){
            while(mp[arr[left]] > 1){
                arr[left]--;
                left++;
            }
            ans = min(ans, right - left);
        }
        else{
            while(mp[arr[right]] != 0){
                right++;
            }
            mp[arr[right]]++;
        }
    }
    for(int i = 0; i < k; i++){
        mp[arr[i]]++;
    }
    vector<pair<int, int>> ansp;
    for(int i = 0; i < ans; i++){
        mp[arr[i]]++;
    }
    left = 0;
    right = ans - 1;
    while(right < n){
        arr[right]++;
        if(fb(mp)){
            ansp.push_back({left, right});
            mp[arr[left]]--;
            left++;
        }
        else{
            while(right < n - 1 && (mp[arr[left]] == 1 && arr[right + 1] != arr[left]) || mp[arr[right + 1]] != 0){
                left++;
                right++;
            }
        }
        right++;
    }
    cout << ans << " " << ansp.size();
    int j = 0;
    for(; j < ansp.size() - 1; j++){
        cout << "[" << ansp[j].first << "," << ansp[j].second << "]" << " ";
    }
    cout << "[" << ansp[j].first << "," << ansp[j].second << "]" << " " << endl;
    return 0;
}
