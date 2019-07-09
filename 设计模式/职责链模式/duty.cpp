#include<bits/stdc++.h>
using namespace std;


class Manager{
protected:
    Manager *m_manager;
    string m_name;
public:
    Manager(Manager *manager, string name) : m_manager(manager), m_name(name){}
    virtual void DealWithRequst(string name, int num){}
};

class CommonManager : public Manager{
public:
    CommonManager(Manager *manager, string name) : Manager(manager, name){}
    void DealWithRequst(string name, int num){
        if(num < 500){
            cout << "经理" << m_name << "批准" << name << "加薪" << num << endl;
        }
        else{
            cout << "经理无法处理，交由总监处理" << endl;
            m_manager -> DealWithRequst(name, num);
        }
    }
};

class Majordomo : public Manager{
public:
    Majordomo(Manager *manager, string name) : Manager(manager, name){}
    void DealWithRequst(string name, int num){
        if(num < 1000){
            cout << "总监" << m_name << "批准" << name << "加薪" << num << endl;
        }
        else{
            cout << "总监无法处理，交由总经理处理" << endl;
            m_manager -> DealWithRequst(name, num);
        }
    }

};

class GeneralManager : public Manager{
public:
    GeneralManager(Manager *manager, string name) : Manager(manager, name){}
    void DealWithRequst(string name, int num){
        cout << "总经理" << m_name << "批准" << name << "加薪" << num << endl;
    }

};
int main(){
    Manager *generalmanager = new GeneralManager(NULL, "A");
    Manager *majordomo = new Majordomo(generalmanager, "B");
    Manager *commonmanager = new CommonManager(majordomo, "c");
    commonmanager -> DealWithRequst("D", 1500);
    commonmanager -> DealWithRequst("E", 800);
    commonmanager -> DealWithRequst("F", 300);
    delete generalmanager;
    delete majordomo;
    delete commonmanager;
    return 0;
}
