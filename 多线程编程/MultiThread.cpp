
#include <iostream>
#include <thread>
using namespace std;
void greeting(int k) {
    for(int i = 0; i < k; i++)
    std::cout << "Hello multithread!" << std::endl;
    return;
}
void fb(int k){
    for(int i = 0; i < k; i++)
    cout << "hello" << endl;
    return;
}
int main() {
    std::thread t{greeting, 5};
    std::thread t1{fb, 5};
    t1.join();
    t.join();
    return 0;
}
