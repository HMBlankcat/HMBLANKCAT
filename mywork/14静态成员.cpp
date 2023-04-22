#include <iostream>
using namespace std;
    //静态成员就是在成员变量和成员函数前加上关键字static
class Person
{
public:
    static int m_A;//所有对象都共享同一份数据
    //编译阶段就分配内存
    //类内声明,类外初始化操作
    
    //静态成员变量也是有访问权限的
private:
    static int m_B;
};
int Person::m_A=100;//类外初始化操作
int Person::m_B=200;//类外初始化操作

void test01()
{
    Person p;
    cout <<p.m_A<<endl;
    Person p2;
    p.m_A = 200;
    cout <<p.m_A << endl;
};
void test02()
{
    //静态成员变量不属于某个对象上,所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式
    //1通过对象进行访问
    //2通过类名进行访问
    Person p;
    cout << p.m_A << endl;
    //cout<<p.m_B<<endl;//类外访问不到类内私有成员
}
int main()
{
    //test01();
    test02();
    system("pause");
    return 0;
}