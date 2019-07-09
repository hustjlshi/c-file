#include<bits/stdc++.h>
using namespace std;
class Image{
public:
    Image(string name):m_Image(name){}
    virtual ~Image(){}
    virtual void show(){}
protected:
    string m_Image;
};

class BigImage : public Image{
public:
    BigImage(string name):Image(name){}
    ~BigImage(){}
    void show() {cout << "show big image:" << m_Image << endl;}
};

class ProxyImage : public Image{
private:
    BigImage *m_BigImage;
public:
    ProxyImage(string name):Image(name), m_BigImage(0){}
    ~ProxyImage(){delete m_BigImage;}
    void show(){
        if(m_BigImage == nullptr)
            m_BigImage = new BigImage(m_Image);
        m_BigImage -> show();
    }
};
int main(){
    Image *image = new ProxyImage("proxy");
    image -> show();
    delete image;
    return 0;
}
