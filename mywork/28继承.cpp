#include <iostream>
using namespace std;
class Basepage
{
public:
    void header()
    {
        cout<<"��ҳ�������Ρ���¼ע�ᣨ����ͷ����"<<endl;
        
    }
    void footer()
    {
        cout<<"�������ġ���վ��������ϵ���ǣ������ײ���"<<endl;

    }
    void left()
    {
        cout<<"Java��Python��C++��PHP��������ࣩ"<<endl;
    }
};
class Java:public Basepage
{
public:
    void content()
    {
        cout<<"JAVA��Ƶ"<<endl;
    }
};
class Python:public Basepage
{
public:
    void content()
    {
        cout<<"Python��Ƶ"<<endl;
    }
};
class Cpp:public Basepage
{
public:
    void content()
    {
        cout<<"C++��Ƶ"<<endl;
    }
};//�﷨��class ���ࣺ�̳з�ʽ ����
//����Ҳ��Ϊ������ ����Ҳ��Ϊ����
// class Java
// {
// public:
//     void header()
//     {
//         cout<<"��ҳ�������Ρ���¼ע�ᣨ����ͷ����"<<endl;
        
//     }
//     void footer()
//     {
//         cout<<"�������ġ���վ��������ϵ���ǣ������ײ���"<<endl;

//     }
//     void left()
//     {
//         cout<<"Java��Python��C++��PHP��������ࣩ"<<endl;
//     }
//     void content()
//     {
//         cout<<"JAVA��Ƶ"<<endl;
//     }

void test01()
{
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout<<"-----------------"<<endl;
};
int main()
{
    test01();
    system("pause");
    return 0;
}