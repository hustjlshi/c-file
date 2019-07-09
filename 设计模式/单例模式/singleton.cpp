#include<iostream>
using namespace std;
class Singleton{
public:
    static Singleton* get_instance(){
        if(m_instance == nullptr){
            m_instance = new Singleton();
        }
        return m_instance;
    }
private:
    Singleton(){}
    Singleton(Singleton const &singleton){}
    Singleton operator = (Singleton const &singleton){}
    static Singleton* m_instance;
};
Singleton *Singleton :: m_instance = nullptr;
int main(){
    static Singleton *a = Singleton::get_instance();
    return 0;
}
