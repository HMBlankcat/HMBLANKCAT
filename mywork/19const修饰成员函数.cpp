#include <iostream>
using namespace std;
//������
class Person
{
public:
//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ����޸ĵ�
//const Person * const this��
//�ڳ�Ա���������const,���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�
    void showperson() const //������
    {
        //this->m_B=100;
        //this->m_A=100;
        //this = NULL;//thisָ�벻�����޸�ָ���ָ���      
    }
    void func()
    {
        m_A=100;
    }
    int m_A;
    mutable int m_B;//�������,��ʹ�ڳ�������Ҳ���޸�,�ӹؼ���mutable
};
void test01()
{
    Person p;
    p.showperson();
};
//������
void test02()
{
    //const Person p;//����ǰ��const,��Ϊ������
    //p.m_B=100;//m_B������ֵ,�ڳ�������Ҳ���޸�
    //������ֻ�ܵ��ó�����
    //p.showperson();
    //p.func();//�������ܵ�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸�����

};
int main()
{
    system("pause");
    return 0;
}