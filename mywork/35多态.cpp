#include <iostream>
using namespace std;
/*��̬��Ϊ����*/
class Animal
{
public:
    virtual void speak()
    {
        cout <<"������˵��"<<endl;
    }

};
class Cat:public Animal
{
public://��д ��������ֵ���� ������ �����б� ��ȫ��ͬ 
    void speak()
    {
        cout <<"Сè��˵��"<<endl;
    }
};
//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣���ַ���
//��̬��̬��������
//1���м̳й�ϵ
//2������Ҫ��д������麯��

//��̬��̬ʹ��
//�����ָ�����������ָ������Ķ���
void doSpeak(Animal &animal)//Animal &animal = cat;
{
    animal.speak();
};
void test01()
{
    Cat cat;
    doSpeak(cat);

};
int main()
{
    test01();
    return 0;
}