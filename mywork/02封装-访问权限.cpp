#include <iostream>
using namespace std;
/*����Ȩ�ޣ�����
1.����Ȩ��  public  ��Ա���ڿ��Է��ʣ���Ҳ���Է���
2.����Ȩ��  protected ��Ա���ڿ��Է��ʣ����ⲻ���Է��� ������Լ̳и���
3.˽��Ȩ�� private ��Ա���ڿ��Է��ʣ����ⲻ���Է���   ���಻���Լ̳и���*/
class Person
{
public:
    string m_Name;
protected:
    string m_car;
private:
    string m_password;
public:
    void func()
    {
        m_Name = "����";
        m_car = "������";
        m_password = "123456";
    };
};
int main()
{
    Person p1;
    p1.m_Name = "lisi";
    //p1.car = "wtf";����Ȩ�����ݣ�������ʲ���
    //p1.m_password = 123;˽��Ȩ�����ݣ�������ʲ���
    p1.func();




    system("pause");
    return 0;

}