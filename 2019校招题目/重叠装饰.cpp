#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> arr;
    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }
    int ans = 0;
    for(int i = 0; i < N; i++){
        queue<pair<int, int>> q;
        q.push({arr[i].first, arr[i].second});
        for(int j = i + 1; j < N; j++){
            if(q.empty()) break;
            int k = q.size();
            for(int m = 0; m < k; m++){
                pair<int, int> tem = q.front();
                q.pop();
                if(arr[j].second < tem.first || arr[j].first > tem.second){
                    q.push(tem);
                }
                else if(arr[j].first > tem.first && arr[j].second < tem.second){
                    q.push({tem.first, arr[j].first - 1});
                    q.push({arr[j].second + 1, tem.second});
                }
                else if(arr[j].first < tem.first && arr[j].second >= tem.first && arr[j].second < tem.second){
                    q.push({arr[j].second + 1, tem.second});
                }
                else if(arr[j].second > tem.second && arr[j].first > tem.first && arr[j].first <= tem.second){
                    q.push({tem.first, arr[j].first - 1});
                }
                else{
                    continue;
                }
            }
        }
        if(!q.empty()) ans++;
    }
    cout << ans << endl;
}

