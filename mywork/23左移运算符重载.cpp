#include <iostream>
using namespace std;
class Person
{
    friend ostream & operator<<(ostream &cout,Person &p);
public:
    //利用成员函数重载左移运算符
    //不会利用成员函数重载<<运算符,因为无法实现cout在左侧

    int m_A;
    int m_B;
};
//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &out,Person &p)//本质operator<<(cout,p),简化cout<<p
{
    out <<"m_A="<<p.m_A<<"m_B="<<p.m_B<<endl;
    return out;
};
void test01()
{
    Person p;
    p.m_A = 10;
    p.m_B = 20;
    cout <<p<<endl; 
};
int main()
{
    test01();
    system("pause");
    return 0;
}