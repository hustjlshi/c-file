#ifndef 适配器模式_H_INCLUDED
#define 适配器模式_H_INCLUDED
class Deque{
public:
    void Pushback(int x){
        cout << "Deque push_back" << endl;
    }
    void Popback(){
        cout << "Deque pop_back" << endl;
    }
    void Pushfront(int x){
        cout << "Deque push_front" << endl;
    }
    void Popfront(){
        cout << "Deque pop_front" << endl;
    }
};

class Sequence{
public:
    virtual void push() = 0;
    virtual void pop() = 0;
};

class Stack : public Sequence{
public:
    void push(){
        deque.Pushback();
    }
    void pop{
        deque.Popback();
    }
private:
    Deque deque;
};

class Queue : public Sequence{
public:
    void push(){
        deque.Pushback();
    }
    void pop{
        deque.Popfront();
    }
private:
    Deque deque;
};


#endif // 适配器模式_H_INCLUDED
