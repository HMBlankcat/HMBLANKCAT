#include <iostream>
using namespace std;
const double PI = 3.14;
class Student
{//���е����Ժͳ�Ա������ͳһ��Ϊ��Ա
//���� ��Ա���� ��Ա����
//��Ϊ ��Ա���� ��Ա���� 
//���� 
public:
    string name;
    int xuehao;
    void getNameandXuehao()
    {
        cout << "ѧ��������" << name << "," << "ѧ��ѧ�ţ�" << xuehao << endl;
    }
};
class Circle
{
    //����Ȩ��
public://����Ȩ��

    //����
    //�뾶
    int m_r;
    //��Ϊ
    //��ȡԲ���ܳ�
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};
int main()
{//c++����������������Ϊ����װ���̳С���̬
//���һ��Բ�࣬��Բ���ܳ�
    Circle c1;
    c1.m_r = 10;
    cout << "Բ���ܳ���" << c1.calculateZC() << endl;
    Student s1;
    s1.name = "shit";
    s1.xuehao = 114514;
    s1.getNameandXuehao();
    system("pause");
    return 0;

}