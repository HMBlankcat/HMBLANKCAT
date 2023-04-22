#include <iostream>
using namespace std;
//赋值运算符重载
class Person
{
public:
    Person(int age)
    {
        m_Age=new int(age);
    }
    int *m_Age;
    ~Person()
    {
        if (m_Age!=NULL)
        {
            delete m_Age;
            m_Age=NULL;//堆区内存重复释放，程序崩溃
            //解决方案：利用深拷贝解决浅拷贝带来的问题
        }
    }
    Person& operator=(Person &p)
    {//编译器是提供浅拷贝m_Age=p.m_Age;
    //应该先判断是否由属性在堆区，如果有先释放干净
        if (m_Age!=NULL)
        {
            delete m_Age;
            m_Age=NULL;
            
        }
        //深拷贝
        m_Age=new int(*p.m_Age); 
        return *this;

    }
};
void test01()
{
    Person p1(18);
    cout<<"p1年龄为"<<*p1.m_Age<<endl;
    Person p2(20);
    p2=p1;//赋值运算的操作
    cout<<"p2年龄为"<<*p2.m_Age<<endl;
    Person p3(30);
    p3=p2=p1;//连续赋值
    cout<<"p3年龄为"<<*p3.m_Age<<endl;
    
};
int main()
{
    test01();
    // int a = 10;
    // int b =20;
    // int c = 30;
    // c=b=a;
    // cout<<"a="<<a<<endl;
    // cout<<"b="<<b<<endl;
    // cout<<"c="<<c<<endl;

    system("pause");
    return 0;
}