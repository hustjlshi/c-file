#ifndef ����_H_INCLUDED
#define ����_H_INCLUDED
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


#endif // ����_H_INCLUDED
