#include <iostream>
using namespace std;
class Person
{
    friend ostream & operator<<(ostream &cout,Person &p);
public:
    //���ó�Ա�����������������
    //�������ó�Ա��������<<�����,��Ϊ�޷�ʵ��cout�����

    int m_A;
    int m_B;
};
//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &out,Person &p)//����operator<<(cout,p),��cout<<p
{
    out <<"m_A="<<p.m_A<<"m_B="<<p.m_B<<endl;
    return out;
};
void test01()
{
    Person p;
    p.m_A = 10;
    p.m_B = 20;
    cout <<p<<endl; 
};
int main()
{
    test01();
    system("pause");
    return 0;
}