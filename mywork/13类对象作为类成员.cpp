#include <iostream>
using namespace std;
//�������Ϊ���Ա
class Phone
{
public:
    Phone(string pname)
    {
        m_Pname =pname;
        cout<<"phone�Ĺ��캯������"<<endl;
    }
    string m_Pname;
    ~Phone()
    {
        cout<<"phone��������������"<<endl;
    }
};
class Person
{
public:
    Person(string name,string pname):m_Name(name),m_phone(pname)
    {
        cout<<"person�Ĺ��캯������"<<endl;

    }
    string m_Name;
    Phone m_phone;
    ~Person()
    {
        cout<<"person��������������"<<endl;
    }
};
//�����������Ϊ�����Ա,����ʱ���ȹ��������,�ٹ�������,������˳�����෴��
void test01()
{
    Person p("����","ƻ��MAX");//��ʽת����,�൱��phone m_phone = pname
    cout<<p.m_Name<<"����:"<<p.m_phone.m_Pname<<endl;
};

int main()
{
    test01();


    system("pause");
    return 0;

}