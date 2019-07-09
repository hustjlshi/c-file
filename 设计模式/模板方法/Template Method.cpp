#include<bits/stdc++.h>
using namespace std;

class Resume{
protected:
    virtual void setperson(){}
    virtual void seteducation(){}
    virtual void setwork(){}
public:
    void File(){
        setperson();
        seteducation();
        setwork();
    }
};

class ResumeA : public Resume{
protected:
    virtual void setperson(){
        cout << "setpersonA" << endl;
    }
    virtual void seteducation(){
        cout << "seteducationA" << endl;
    }
    virtual void setwork(){
        cout << "setworkA" << endl;
    }
};

class ResumeB : public Resume{
protected:
    virtual void setperson(){
        cout << "setpersonB" << endl;
    }
    virtual void seteducation(){
        cout << "seteducationB" << endl;
    }
    virtual void setwork(){
        cout << "setworkB" << endl;
    }
};

int main(){
    Resume *p = new ResumeA;
    p -> File();
    p = new ResumeB;
    p -> File();
    delete p;
}
