#include <iostream>
using namespace std;
#include <string>
class Building
{
    friend class Goodgay;//Goodgay类是Building的好朋友，可以访问Building中的私有成员
public:
    Building();
public:
    string m_Sittingroom;
private:
    string m_bedroom;
};

class Goodgay
{
public:
    Goodgay();

public:

    Building * building;
    void visit();//参观函数 访问building中的属性
    
};
Building::Building()//类外写成员函数
{
    m_Sittingroom = "客厅";
    m_bedroom = "卧室";

};
Goodgay::Goodgay()
{
//创建建筑物对象
    building = new Building;
};
void Goodgay::visit()
{
    cout<<"好基友类正在访问:"<<building->m_Sittingroom<<endl;
    cout<<"好基友类正在访问:"<<building->m_bedroom<<endl;
};
void test01()
{
    Goodgay gg;
    gg.visit();
};
int main()
{
    test01();
    system("pause");
    return 0;
}