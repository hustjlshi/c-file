#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1;
    vector<int> arr2;
    int tem;
    while(cin >> tem){
        arr1.push_back(tem);
        if(getchar() == '\n') break;
    }
    while(cin >> tem){
        arr2.push_back(tem);
        if(getchar() == '\n') break;
    }
    int i = 0;
    int j = 0;
    int len1 = arr1.size();
    int len2 = arr2.size();
    if(arr1[0] < arr2[0]){
        cout << arr1[0];
        i++;
    }
    else{
        cout << arr2[0];
        j++;
    }
    while(i < len1 && j < len2){
        if(arr1[i] < arr2[j]){
            cout << " " << arr1[i];
            i++;
        }
        else{
            cout << " " << arr2[j];
            j++;
        }
    }
    while(i < len1){
        cout << " " << arr1[i];
        i++;
    }
    while(j < len2){
        cout << " " << arr2[j];
        j++;
    }
    cout << endl;
    return 0;
}
