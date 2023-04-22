#include <iostream>
using namespace std;
//两个派生类继承同一个基类，又有某个类同时继承着两个派生类
//这种继承被称为菱形继承，或者钻石继承
class Animal
{
public:
    int m_Age;
};
//利用虚继承，可以解决菱形继承的问题
//继承之前加关键字virtual 变成虚继承
//animal类称为虚基类
class Sheep:virtual public Animal{};
class Tuo:virtual public Animal{};
class SheepTuo:public Sheep,public Tuo{};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age=18;
    st.Tuo::m_Age=28;
    //当菱形继承，两个父类拥有相同的数据，需要加以作用域区分
    cout << "SheepTuo的年龄为：" << st.Sheep::m_Age << endl;
    cout << "SheepTuo的年龄为：" << st.Tuo::m_Age << endl;
};//这份数据我们知道 只要有一份就可以了，菱形继承导致数据有两份，资源浪费
int main()
{
    test01();
    return 0;
}