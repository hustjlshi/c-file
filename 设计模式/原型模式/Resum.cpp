#include<bits/stdc++.h>
using namespace std;
class Resume{
protected:
    char *name;
public:
    Resume(){}
    virtual ~Resume(){}
    virtual Resume* clone(){}
    virtual void Set(string name){}
    virtual void Show(){}
};

class ResumeA : public Resume{
public:
    ResumeA(const char *str){
        if(str == nullptr){
            name = new char[1];
            name[0] = '\0';
        }
        else{
            name = new char[strlen(str) + 1];
            strcpy(name, str);
        }
    }
    ResumeA(const ResumeA &r){
        name = new char[strlen(r.name) + 1];
        strcpy(name, r.name);
    }
    ResumeA* clone(){
        return new ResumeA(*this);
    }
    void Show(){
        cout << name<< endl;
    }
    ~ResumeA(){
        delete []name;
    }
};

int main(){
    Resume *r1 = new ResumeA("A");
    Resume *r2 = r1 -> clone();
    r1 -> Show();
    r2 -> Show();
    delete r1;
    delete r2;
    return 0;
}

