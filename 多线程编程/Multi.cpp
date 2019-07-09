#include<iostream>
#include<thread>
using namespace std;
void fun(int i){
    cout << i << endl;
}
int main(){
    for(int i = 0; i < 4; i++){
        thread t(fun, i);
        t.detach();
        cout << "mp" << endl;
    }
    return 0;
}
