#include <iostream>
using namespace std;
//��ϵ���������
class Person
{
public:
    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }
    string m_Name;
    int m_Age;
    bool operator==(Person &p)
    {
        if (this->m_Name==p.m_Name && this->m_Age==p.m_Age)
        {
            return true;

        };
        return false;
    };
    bool operator!=(Person &p)
    {
        if (this->m_Name==p.m_Name && this->m_Age==p.m_Age)
        {
            return false;

        };
        return true;

    }

};
void test01()
{
    Person p1("TOM",18);
    Person p2("TOM",18);
    
    //���ع�ϵ�����==
    
    if (p1==p2)
    {
        cout<<"p1��p2���"<<endl;
    }
    else
    {
        cout<<"p1��p2�����"<<endl;
    };
};
int main()
{
    test01();

    system("pause");
    return 0;
};