#include <iostream>
using namespace std;
class Base1
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
//�̳з�ʽ
//�����̳�
class Son1:public Base1
{
public:
    void func()
    {
        a=10;
        //�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
        b=20;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
        //c=30;//�����е�˽��Ȩ�޳�Ա ���������ǲ��ɷ��ʵ�
    }

};
void test01()
{
    Son1 s1;
    s1.a=100;
    //s1.b=200;//����Ȩ�޳�Ա���ɷ���
}
//�����̳�
class Son2:protected Base1
{
public:
    void func()
    {
        a=10;
        //�����еĹ���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
        b=20;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
        //c=30;//�����е�˽��Ȩ�޳�Ա ���������ǲ��ɷ��ʵ�
    }
};
void test02()
{
    Son2 s2;
    //s2.a=100;//����Ȩ�޳�Ա���ɷ���
    //s2.b=200;//����Ȩ�޳�Ա���ɷ���
};

//˽�м̳�
class Son3:private Base1
{
public:
    void func()
    {
        a=10;
        //�����еĹ���Ȩ�޳�Ա ����������Ȼ��˽��Ȩ��
        b=20;//�����еı���Ȩ�޳�Ա ����������Ȼ��˽��Ȩ��
        //c=30;//�����е�˽��Ȩ�޳�Ա ���������ǲ��ɷ��ʵ�
    }
};
class Grandson3:public Son3
{
public:
    void func()
    {
        //a=10;//˽��Ȩ�޳�Ա���ɷ���
        //b=20;//˽��Ȩ�޳�Ա���ɷ���
    }
};
int main()
{
    system("pause");
    return 0;
}