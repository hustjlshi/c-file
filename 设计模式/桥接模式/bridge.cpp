#include<bits/stdc++.h>
using namespace std;
class Os{
  public:
      virtual void Install_imp(){}
};


class WindowOs : public Os{
public:
    virtual void Install_imp(){
        cout << "安装window" << endl;
    }
};

class LinuxOs : public Os{
public:
    virtual void Install_imp(){
        cout << "安装Linux" << endl;
    }
};

class AppleOs : public Os{
public:
    virtual void Install_imp(){
        cout << "安装Apple" << endl;
    }
};

class Computer{
public:
    virtual void InstallOs(Os *os){}
};


class DellComputer : public Computer{
public:
    virtual void InstallOs(Os *os){
        os -> Install_imp();
    }
};

class AppleComputer : public Computer{
public:
    virtual void InstallOs(Os *os){
        os -> Install_imp();
    }
};

class HpComputer : public Computer{
public:
    virtual void InstallOs(Os *os){
        os -> Install_imp();
    }
};

int main(){
    Os *s1 = new LinuxOs;
    Os *s2 = new AppleOs;
    Computer *cp = new AppleComputer;
    cp -> InstallOs(s1);
    cp -> InstallOs(s2);

}
