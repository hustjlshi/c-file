#ifndef 데절_H_INCLUDED
#define 데절_H_INCLUDED
class Singleton{
public:
    static Singleton getinstance(){
        static Singleton instance;
        return instance;
    }
private:
    Singleton(){}
    Singleton(Singleton const& singleton);
    Sigleton const& operator=(Singleton const& singleton);
};


#endif // 데절_H_INCLUDED
