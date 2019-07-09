#include<bits/stdc++.h>
using namespace std;

//�������Ϣ
class Memento{
public:
    int m_vitality; //����ֵ
    int m_attack; //����ֵ
    int m_defense; //����ֵ
public:
    Memento(int vitality, int attack, int defense): m_vitality(vitality), m_attack(attack), m_defense(defense){}
    Memento& operator = (Memento const &memento){
        m_vitality = memento.m_vitality;
        m_attack = memento.m_attack;
        m_defense = memento.m_defense;
        return *this;
    }
};

//��Ϸ��ɫ
class GameRole{
private:
    int m_vitality;
    int m_attack;
    int m_defense;
public:
    GameRole(int vitality, int attack, int defense) : m_vitality(vitality), m_attack(attack), m_defense(defense){}
    Memento Save(){
        Memento memento(m_vitality, m_attack, m_defense);
        return memento;
    }
    void Load(Memento memento){
        m_vitality = memento.m_vitality;
        m_attack = memento.m_attack;
        m_defense = memento.m_defense;
    }
    void Show(){
        cout << "vitality : " << m_vitality << endl;
        cout << "attack : " << m_attack << endl;
        cout << "defense : " << m_defense << endl;
    }
    void Attack(){
        m_vitality -= 10;
        m_attack -= 10;
        m_defense -= 10;
    }
};

//������ȿ�
class Caretake{
public:
    Caretake(){}
    void Save(Memento memento){
        vec_memento.push_back(memento);
    }
    Memento Load(int state){
        return vec_memento[state];
    }
private:
    vector<Memento> vec_memento;
};

int main(){
    Caretake caretake;
    GameRole gamerole(100, 100, 100);
    gamerole.Show();
    caretake.Save(gamerole.Save());
    gamerole.Attack();
    caretake.Save(gamerole.Save());
    gamerole.Show();
    gamerole.Load(caretake.Load(1));
    gamerole.Show();
}
