#include <iostream>
using namespace std;
//��ֵ���������
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
            m_Age=NULL;//�����ڴ��ظ��ͷţ��������
            //�������������������ǳ��������������
        }
    }
    Person& operator=(Person &p)
    {//���������ṩǳ����m_Age=p.m_Age;
    //Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ�
        if (m_Age!=NULL)
        {
            delete m_Age;
            m_Age=NULL;
            
        }
        //���
        m_Age=new int(*p.m_Age); 
        return *this;

    }
};
void test01()
{
    Person p1(18);
    cout<<"p1����Ϊ"<<*p1.m_Age<<endl;
    Person p2(20);
    p2=p1;//��ֵ����Ĳ���
    cout<<"p2����Ϊ"<<*p2.m_Age<<endl;
    Person p3(30);
    p3=p2=p1;//������ֵ
    cout<<"p3����Ϊ"<<*p3.m_Age<<endl;
    
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