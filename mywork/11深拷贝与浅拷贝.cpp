#include <iostream>
using namespace std;
//浅拷贝:简单的复制拷贝操作
//深拷贝:在堆区重新申请一个空间进行拷贝操作
class Person
{
public:
    Person()
    {
        cout<<"Person的默认构造函数调用"<<endl;
    }
    Person(int age,int height)
    {
        m_Height = new int(height);
        m_Age=age;
        cout<<"Person的有参构造函数调用"<<endl;

    }
    Person(const Person &p)
    {
        cout<<"person拷贝构造函数调用"<<endl;
        m_Age = p.m_Age;
        //m_Height = p.m_Height;//编译器默认实现就是这行代码
        //j进行深拷贝操作
        m_Height = new int(*p.m_Height);

    }
    ~Person()
    {
        //析构代码,将对其开辟数据作释放操作
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout<<"Person的析构函数调用"<<endl;
    }
    int m_Age;
    int *m_Height;

};
void test01()
{
    Person p1(18,160);
    cout<<"p1的年龄为:"<<p1.m_Age<<"p1的身高为"<<*p1.m_Height<<endl;
    Person p2(p1);
    cout<<"p2的年龄为:"<<p2.m_Age<<"p2的身高为"<<*p2.m_Height<<endl;

};


int main()
{
    test01();


    system("pause");
    return 0;

}
//浅拷贝带来的问题就是堆区内存重复释放