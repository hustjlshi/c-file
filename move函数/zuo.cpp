#include<bits/stdc++.h>
using namespace std;
std::vector<std::string> g_ids;//ȫ�ֱ���
void addIds(std::string id)
{
    g_ids.push_back(std::move(id));
}


int main()
{
    addIds("1234");//����ӵ�g_ids�����У������һ��copy���캯����һ��move���캯��
    std::string my_id = "123456789";
    addIds(my_id);//�����һ��copy���캯����һ��move���캯��

    for(auto &e : g_ids)
        cout<<e<<endl;
    int a = 1;
    int c = a++++a;
    cout << c << endl;
    return 0;
}
