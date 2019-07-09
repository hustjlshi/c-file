#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> st;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] == '[' || s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ']'){
            if(st.top() != '['){
                cout << "false" << endl;
                return 0;
            }
            else{
                st.pop();
            }
        }
        else if(s[i] == ')'){
            if(st.top() != '('){
                cout << "false" << endl;
                return 0;
            }
            else{
                st.pop();
            }
        }
    }
    cout << "true" << endl;
    return 0;
}
