#include<bits/stdc++.h>
using namespace std;
class Observer{
public:
    Observer(){}
    virtual ~Observer(){}
    virtual void updata(){}
};

class Blog{
public:
    Blog(){}
    virtual ~Blog(){}
    void Attach(Observer *observer){m_observer.push_back(observer);}
    void Remove(Observer *observer){m_observer.remove(observer);}
    void Notify(){
        auto ite = m_observer.begin();
        for(; ite != m_observer.end(); ite++)
            (*ite) -> updata();
    }
    virtual void SetStatus(string s){m_status = s;}
    virtual string GetStatus(){return m_status;}
private:
    list<Observer*> m_observer;
protected:
    string m_status;
};

class CSDNBlog : public Blog{
private:
    string m_name;
public:
    CSDNBlog(string name):m_name(name){}
    ~CSDNBlog(){}
    void SetStatus(string s){m_status = "csdn通知" + m_name + s;}
    string GetStatus(){return m_status;}
};

class ObserverBlog : public Observer{
private:
    string m_name;
    Blog *m_blog;
public:
    ObserverBlog(string name, Blog *blog):m_name(name), m_blog(blog){}
    ~ObserverBlog(){};
    void updata(){
        string status = m_blog -> GetStatus();
        cout << m_name << "-----" << status << endl;
    }
};
int main(){
    Blog *blog = new CSDNBlog("shijiaolin");
    Observer *observer = new ObserverBlog("guancha", blog);
    blog -> Attach(observer);
    blog -> SetStatus("发表设计模式c++实现--观察者模式");
    blog -> Notify();
    delete blog;
    delete observer;
    return 0;
}
