#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        m_A=100;
    }
    void func()
    {
        cout<<"Base~func()调用"<<endl;
    }
    int m_A;
};
class Son:public Base
{
public:
    Son()
    {
        m_A=200;
    }
    void func()
    {
        cout<<"Son~func()调用"<<endl;
    }
    int m_A;

};//同名成员函数处理
void test01()
{
    Son s;
    cout <<"Son下m_A="<<s.m_A<<endl;
    //如果通过子类对象 访问到父类中同名成员需要加作用域
    cout<<"Base下m_A="<<s.Base::m_A<<endl;
};//同名成员函数处理
void test02()
{
    Son s;
    s.func();
    s.Base::func();
    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
    //子类对象可以直接访问到子类中同名成员

}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}