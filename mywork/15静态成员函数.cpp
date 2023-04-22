#include <iostream>
using namespace std;
class Person
{
public:
    static void func()
    {
        m_A=100;//静态成员函数可以访问静态成员变量
        cout<<"static void func调用"<<endl;
        //m_B=100;//静态成员函数不可以访问非静态成员变量
        //无法区别到底是哪个m_B
    }
    static int m_A;//静态成员变量
    int m_B;//非静态成员变量
};
int Person::m_A=0;

//有两种访问方式
void test01()
{
    //1通过对象访问
    Person p;
    p.func();
    //2通过类名访问
    Person::func();
}
int main()
{
    //静态成员函数,所有对象共享同一个函数
    //静态成员函数只能访问静态成员变量

    system("pause");
    return 0;
}