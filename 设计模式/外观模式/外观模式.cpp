#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void a(){
        cout << "a" << endl;
    }
};

class B{
public:
    void b(){
        cout << "b" << endl;
    }
};

class C{
public:
    void c(){
        cout << "c" << endl;
    }
};

class Comp{
public:
    void run(){
        A a;
        B b;
        C c;
        a.a();
        b.b();
        c.c();
    }
};

int main(){
    Comp comp;
    comp.run();
    return 0;
}
