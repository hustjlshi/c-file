#include<bits/stdc++.h>
using namespace std;
class Mediator;
class Person{
protected:
    Mediator *m_mediator;
public:
    virtual void SetMediator(Mediator *mediator){}
    virtual void SendMessage(string message){}
    virtual void GetMessage(string message){}
};

class Mediator{
public:
    virtual void Send(string message, Person *person){}
    virtual void SetA(Person *A){}
    virtual void SetB(Person *B){}
};

class Renter : public Person{
public:
    void SetMediator(Mediator *mediator){
        m_mediator = mediator;
    }
    void SendMessage(string message){m_mediator -> Send(message, this);}
    void GetMessage(string message){cout << " 租房者收到信息 : " << message << endl;}
};

class LandLoad : public Person{
public:
    void SetMediator(Mediator *mediator){
        m_mediator = mediator;
    }
    void SendMessage(string message){m_mediator -> Send(message, this);}
    void GetMessage(string message){cout << " 房东收到信息 : " << message << endl;}
};

class HouseMediator : public Mediator{
private:
    Person *m_renter;
    Person *m_landload;
public:
    void SetA(Person *A){m_renter = A;}
    void SetB(Person *B){m_landload = B;}
    void Send(string message, Person *person){
        if(person == m_landload){
            m_renter -> GetMessage(message);
        }
        else{
            m_landload -> GetMessage(message);
        }
    }
};
int main(){
    Mediator *mediator = new HouseMediator();
    Person *a = new Renter();
    Person *b = new LandLoad();
    mediator -> SetA(a);
    mediator -> SetB(b);
    a -> SetMediator(mediator);
    b -> SetMediator(mediator);
    a -> SendMessage("我想在武汉附近租房子\n");
    b -> SendMessage("我在武汉附近有房子\n");
    delete a;
    delete b;
    return 0;
}
