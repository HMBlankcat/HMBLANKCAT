#include <iostream>
using namespace std;
class Person
{
public:
    static void func()
    {
        m_A=100;//��̬��Ա�������Է��ʾ�̬��Ա����
        cout<<"static void func����"<<endl;
        //m_B=100;//��̬��Ա���������Է��ʷǾ�̬��Ա����
        //�޷����𵽵����ĸ�m_B
    }
    static int m_A;//��̬��Ա����
    int m_B;//�Ǿ�̬��Ա����
};
int Person::m_A=0;

//�����ַ��ʷ�ʽ
void test01()
{
    //1ͨ���������
    Person p;
    p.func();
    //2ͨ����������
    Person::func();
}
int main()
{
    //��̬��Ա����,���ж�����ͬһ������
    //��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

    system("pause");
    return 0;
}