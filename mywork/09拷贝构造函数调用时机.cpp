#include <iostream>
using namespace std;
/*拷贝构造函数调用时机
1.使用一个已经创建完毕的对象来初始化一个新对象
2.值传递的方式给函数参数传值
3.值方式返回局部对象*/
class Person
{
    public:
    Person()
    {
        cout <<"Person默认构造函数调用"<<endl;
    }
    Person(int age)
    {
        cout <<"Person有参构造函数调用"<<endl;
        m_Age = age;
    }
    Person(const Person &p)
    {
        cout <<"Person拷贝构造函数调用"<<endl;
        m_Age = p.m_Age;
    }
    ~Person()
    {
        cout<<"析构函数调用"<<endl;
    }
    int m_Age;
};
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout <<"P2的年龄为"<<p2.m_Age <<endl;

};
void doWork(Person p)
{

};
void test02()//2
{
    Person p;
    doWork(p);
};
Person doWork2()//3
{
    Person p1;
    cout <<(int*)&p1<<endl;
    
    return p1;
};
void test03()
{
    Person p = doWork2();
    cout <<(int*)&p<<endl;
}
int main()
{
    //test01();
    //test02();
    test03();


    system("pause");
    return 0;

}