#include<bits/stdc++.h>
using namespace std;
std::vector<std::string> g_ids;//全局变量
void addIds(std::string id)
{
    g_ids.push_back(std::move(id));
}


int main()
{
    addIds("1234");//在添加到g_ids过程中，会调用一次copy构造函数，一次move构造函数
    std::string my_id = "123456789";
    addIds(my_id);//会调用一次copy构造函数，一次move构造函数

    for(auto &e : g_ids)
        cout<<e<<endl;
    int a = 1;
    int c = a++++a;
    cout << c << endl;
    return 0;
}
