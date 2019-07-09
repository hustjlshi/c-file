#include<bits/stdc++.h>
using namespace std;
class Phone{
public:
    Phone(){}
    virtual ~Phone(){}
    virtual void ShowDecorate(){}
};

class Huawei : public Phone{
private:
    string m_name;
public:
    Huawei(string name):m_name(name){}
    ~Huawei(){}
    void ShowDecorate(){cout << m_name << "的装饰" << endl;}
};

class Xiaomi : public Phone{
private:
    string m_name;
public:
    Xiaomi(string name): m_name(name){}
    ~Xiaomi(){}
    void ShowDecorate(){cout << m_name << "的装饰" << endl;}
};

class PhoneDecorate : public Phone{
public:
    PhoneDecorate(Phone *phone):m_phone(phone){}
    ~PhoneDecorate(){}
    virtual void ShowDecorate(){ m_phone -> ShowDecorate();}
private:
    Phone *m_phone;
};

class DecorateA : public PhoneDecorate{
public:
    DecorateA(Phone *phone):PhoneDecorate(phone){}
    void ShowDecorate(){PhoneDecorate::ShowDecorate(); AddDecorate();}
private:
    void AddDecorate(){cout << "增加挂件" << endl;}
};

class DecorateB : public PhoneDecorate{
public:
    DecorateB(Phone *phone):PhoneDecorate(phone){}
    void ShowDecorate(){PhoneDecorate::ShowDecorate(); AddDecorate();}
private:
    void AddDecorate(){cout << "贴膜" << endl;}
};

int main(){
    Phone *p = new Xiaomi("MyXiaomi");
    Phone *q = new DecorateA(p);
    Phone *r = new DecorateB(q);
    r -> ShowDecorate();
    delete r;
    delete q;
    delete p;
    return 0;
}
