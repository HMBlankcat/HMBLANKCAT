#include <iostream>
using namespace std;
//ǳ����:�򵥵ĸ��ƿ�������
//���:�ڶ�����������һ���ռ���п�������
class Person
{
public:
    Person()
    {
        cout<<"Person��Ĭ�Ϲ��캯������"<<endl;
    }
    Person(int age,int height)
    {
        m_Height = new int(height);
        m_Age=age;
        cout<<"Person���вι��캯������"<<endl;

    }
    Person(const Person &p)
    {
        cout<<"person�������캯������"<<endl;
        m_Age = p.m_Age;
        //m_Height = p.m_Height;//������Ĭ��ʵ�־������д���
        //j�����������
        m_Height = new int(*p.m_Height);

    }
    ~Person()
    {
        //��������,�����俪���������ͷŲ���
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout<<"Person��������������"<<endl;
    }
    int m_Age;
    int *m_Height;

};
void test01()
{
    Person p1(18,160);
    cout<<"p1������Ϊ:"<<p1.m_Age<<"p1�����Ϊ"<<*p1.m_Height<<endl;
    Person p2(p1);
    cout<<"p2������Ϊ:"<<p2.m_Age<<"p2�����Ϊ"<<*p2.m_Height<<endl;

};


int main()
{
    test01();


    system("pause");
    return 0;

}
//ǳ����������������Ƕ����ڴ��ظ��ͷ�