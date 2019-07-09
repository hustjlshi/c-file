#ifndef ����_H_INCLUDED
#define ����_H_INCLUDED


//�򵥹���ģʽ
typedef enum producttype{
    typeA,
    typeB,
    typeC
}PRODUCT;

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
    Product* createProduct(PRODUCT type){
        switch(type){
        case typeA:
            return new ProductA;
        case typeB:
            return new ProductB;
        case typeC:
            return new ProductC;
        default:
            return NULL;
        }
    }
};



��������ģʽ��
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
    virtual Product* CreatProduct() = 0;
};
class FactoryA : public Factory{
public:
    Product* CratProduct(){
        return new ProductA;
    }
};

class FactoryB : public Factory{
public:
    Product* CratProduct(){
        return new ProductB;
    }
};

class FactoryC : public Factory{
public:
    Product* CratProduct(){
        return new ProductC;
    }
};


//���󹤳�ģʽ
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

class MultiProduct{
public:
    virtual void show() = 0;
};

class MultiProductA : public MultiProduct{
public:
    void show(){
        cout << "ProductA" << endl;
    }
};

class MultiProductB : public MultiProduct{
public:
    void show(){
        cout << "ProductB" << endl;
    }
};

class MultiProductC : public MultiProduct{
public:
    void show(){
        cout << "ProductC" << endl;
    }
};

class Factory{
public:
    virtual Product* CreatProduct() = 0;
    virtual MutiProduct* CreatProduct() = 0;
};
class FactoryA : public Factory{
public:
    Product* CratProduct(){
        return new ProductA;
    }
    MutiProduct* CratProduct(){
        return new MutiProductA;
    }
};

class FactoryB : public Factory{
public:
    Product* CratProduct(){
        return new ProductB;
    }
    MutiProduct* CratProduct(){
        return new MutiProductB;
    }
};

class FactoryC : public Factory{
public:
    Product* CratProduct(){
        return new ProductC;
    }
    MutiProduct* CratProduct(){
        return new MutiProductC;
    }
};
#endif // ����_H_INCLUDED
