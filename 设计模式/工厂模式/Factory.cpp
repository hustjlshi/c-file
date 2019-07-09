#include<bits/stdc++.h>
using namespace std;

class Product{
public:
    virtual void show() = 0;
};

class ProductA : public Product{
public:
    void show(){
        cout << "ProductA" << endl;
    }
};

class ProductB : public Product{
public:
    void show(){
        cout << "ProductB" << endl;
    }
};

class ProductC : public Product{
public:
    void show(){
        cout << "ProductC" << endl;
    }
};

class Factory{
public:
    virtual Product* CreateProduct() = 0;
};

class FactoryA : public Factory{
public:
    Product *CreateProduct(){
        return new ProductA;
    }
};

class FactoryB : public Factory{
public:
    Product *CreateProduct(){
        return new ProductB;
    }
};

class FactoryC : public Factory{
public:
    Product *CreateProduct(){
        return new ProductC;
    }
};


int main(){
    Factory *f = new FactoryA;
    Product *p = f -> CreateProduct();
    p -> show();
    delete f;
    delete p;
    f = new FactoryB;
    p = f -> CreateProduct();
    p -> show();
    delete f;
    delete p;

}
