#include<bits/stdc++.h>
using namespace std;

class Builder{
public:
    virtual void builderHead(){}
    virtual void builderBody(){}
};

class FatBuilder : public Builder{
public:
    virtual void builderHead(){
        cout << "builder fat head" << endl;
    }
    virtual void builderBody(){
        cout << "builder fat body" << endl;
    }
};

class ThinBuilder : public Builder{
public:
    virtual void builderHead(){
        cout << "builder thin head" << endl;
    }
    virtual void builderBody(){
        cout << "builder thin body" << endl;
    }
};

class Direct{
private:
    Builder *im_builder;
public:
    Direct(Builder *builder){
        im_builder = builder;
    }
    void create(){
        im_builder -> builderHead();
        im_builder -> builderBody();
    }
};

int main(){
    ThinBuilder fat;
    Direct direct(&fat);
    direct.create();
}
