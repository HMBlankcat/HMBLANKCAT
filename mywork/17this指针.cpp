#include <iostream>
using namespace std;
//解决名称冲突

class Person
{
public:
    Person(int age)
    {
        //this指针指向的是被调用的成员函数所属对象
        this->age = age;
    }
    int age;
   Person PersonAddage(Person &p)
    {
        this->age += p.age;
        return *this;
    };
};
void test01()
{
    Person p1(18);
    cout<<"p1的年龄为:"<<p1.age<<endl;
};
//返回对象本身用*this
void test02()
{
    Person p1(10);
    Person p2(10);
    p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
    cout<<"p2的年龄为:"<<p2.age<<endl;
}
int main()
{
    test02();
    system("pause");
    return 0;
}