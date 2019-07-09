#include<bits/stdc++.h>
#include<pthread.h>
using namespace std;
class Singleton{
private:
    int k;
    Singleton(int m):k(m){}
    Singleton(const Singleton&){}
    Singleton operator =(const Singleton&){}
public:
    void show(){
        cout << k << endl;
    }
    static Singleton *get_instance(int);
    static Singleton *m_instance;
};
Singleton* Singleton::m_instance = nullptr;
Singleton* Singleton::get_instance(int f){
    //pthread_mutex_t m;
    //pthread_mutex_unlock(&m);
    if(m_instance == nullptr){
        for(int i = 0; i < 10000; i++){
                i++;
                i--;
        }
        m_instance = new Singleton(f);
        return m_instance;
    }
    else
        return m_instance;
    //pthread_mutex_lock(&m);
}
void fb(){
    Singleton *singleton;
    singleton = Singleton::get_instance(4);
    singleton -> show();
}
void fc(){
    Singleton *singleton;
    singleton = Singleton::get_instance(2);
    singleton -> show();
}
void fd(){
    Singleton *singleton;
    singleton = Singleton::get_instance(3);
    singleton -> show();
}
int main(){
    int i = 100;
    while(i--){
    thread t{fb};
    thread f{fc};
    thread v{fd};
    t.detach();
    f.detach();
    v.detach();}
    return 0;
}
