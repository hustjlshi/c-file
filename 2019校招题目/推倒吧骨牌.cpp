#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    int i = 0;
    while(i < len){
        if(s[i] == '.'){
            int j = i + 1;
            while(j < len && s[j] == '.'){
                j++;
            }
            if(j == len || s[j] == 'R'){
                i = j;
            }
            else{
                for(int k = i; k < j; k++){
                    s[k] = 'L';
                }
                i = j;
            }
        }
        else if(s[i] == 'L'){
            i++;
        }
        else{
            int j = i + 1;
            while(j < len && s[j] == '.'){
                j++;
            }
            if(j == len || s[j] == 'R'){
                for(int k = i; k < j; k++){
                    s[k] = 'R';
                }
                i = j;
            }
            else{
                int left = i + 1;
                int right = j - 1;
                while(left < right){
                    s[left] = 'R';
                    s[right] = 'L';
                    left++;
                    right--;
                }
                i = j;
            }
        }
    }
    cout << s << endl;
    return 0;
}

