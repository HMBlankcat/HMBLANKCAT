#include <iostream>
using namespace std;
#include <string>
class Building
{
    friend void goodgay(Building *building);//全局函数是本类的好朋友,可以访问私有成员
public:
    string m_Sitting_room;//客厅
    Building()
    {
        m_Sitting_room="客厅";
        m_Bedroom="卧室";
    }
private:
    string m_Bedroom;//卧室
};
//全局函数
void goodgay(Building *building)
{
    cout <<"好基友的全局函数正在访问;"<<building->m_Sitting_room<<endl;
    cout <<"好基友的全局函数正在访问;"<<building->m_Bedroom<<endl;
};
void test01()
{
    Building building;
    goodgay(&building);
};
int main()
{
    test01();
    system("pause");
    return 0;
}