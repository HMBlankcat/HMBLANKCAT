#include <iostream>
using namespace std;
    //��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static
class Person
{
public:
    static int m_A;//���ж��󶼹���ͬһ������
    //����׶ξͷ����ڴ�
    //��������,�����ʼ������
    
    //��̬��Ա����Ҳ���з���Ȩ�޵�
private:
    static int m_B;
};
int Person::m_A=100;//�����ʼ������
int Person::m_B=200;//�����ʼ������

void test01()
{
    Person p;
    cout <<p.m_A<<endl;
    Person p2;
    p.m_A = 200;
    cout <<p.m_A << endl;
};
void test02()
{
    //��̬��Ա����������ĳ��������,���ж��󶼹���ͬһ������
    //��˾�̬��Ա���������ַ��ʷ�ʽ
    //1ͨ��������з���
    //2ͨ���������з���
    Person p;
    cout << p.m_A << endl;
    //cout<<p.m_B<<endl;//������ʲ�������˽�г�Ա
}
int main()
{
    //test01();
    test02();
    system("pause");
    return 0;
}