#include <iostream>
using namespace std;
//������Ƴ�ͻ

class Person
{
public:
    Person(int age)
    {
        //thisָ��ָ����Ǳ����õĳ�Ա������������
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
    cout<<"p1������Ϊ:"<<p1.age<<endl;
};
//���ض�������*this
void test02()
{
    Person p1(10);
    Person p2(10);
    p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
    cout<<"p2������Ϊ:"<<p2.age<<endl;
}
int main()
{
    test02();
    system("pause");
    return 0;
}