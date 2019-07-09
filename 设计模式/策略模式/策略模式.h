#ifndef 策略模式_H_INCLUDED
#define 策略模式_H_INCLUDED

class Alogrithm{
public:
    virtual void func() = 0;
};

class AlogrithmA : public Alogrithm{
public:
    void func(){
        cout << "AlogrithmA" << endl;
    }
};

class AlogrithmB : public Alogrithm{
public:
    void func(){
        cout << "AlogrithmB" << endl;
    }
};

class AlogrithmC : public Alogrithm{
public:
    void func(){
        cout << "AlogrithmC" << endl;
    }
};
#endif // 策略模式_H_INCLUDED
