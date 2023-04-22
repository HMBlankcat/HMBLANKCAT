#include <iostream>
using namespace std;
//类对象作为类成员
class Phone
{
public:
    Phone(string pname)
    {
        m_Pname =pname;
        cout<<"phone的构造函数调用"<<endl;
    }
    string m_Pname;
    ~Phone()
    {
        cout<<"phone的析构函数调用"<<endl;
    }
};
class Person
{
public:
    Person(string name,string pname):m_Name(name),m_phone(pname)
    {
        cout<<"person的构造函数调用"<<endl;

    }
    string m_Name;
    Phone m_phone;
    ~Person()
    {
        cout<<"person的析构函数调用"<<endl;
    }
};
//其它类对象作为本类成员,够早时候先构造类对象,再构造自身,析构的顺序是相反的
void test01()
{
    Person p("张三","苹果MAX");//隐式转换法,相当于phone m_phone = pname
    cout<<p.m_Name<<"拿着:"<<p.m_phone.m_Pname<<endl;
};

int main()
{
    test01();


    system("pause");
    return 0;

}