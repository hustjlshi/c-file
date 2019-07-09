#include<iostream>
using namespace std;
class Singleton{
public:
    static Singleton get_instance(){
        static Singleton singleton;
        return singleton;
    }
private:
    Singleton(){}
    Singleton Singleton(Singleton const &singleton){}
    Singleton operator = (Singleton const &singleton){}
};
int main(){
    Singleton a;
    return 0;
}
