#include <iostream>
using namespace std;
//�̳��еĹ��������˳��:�ȹ��츸���ڹ������࣬������˳���빹��˳���෴
class Base
{
public:
    Base()
    {
        cout<<"base�Ĺ��캯��"<<endl;
    }
    ~Base()
    {
        cout<<"base����������"<<endl;

    }

};
class Son:public Base
{
public:
    Son()
    {
        cout<<"Son�Ĺ��캯��"<<endl;
    }
    ~Son()
    {
        cout<<"Son����������"<<endl;

    }   
};
void test01()
{
    //Base b;
    Son a;
}
int main()
{
    test01();
    system("pause");
    return 0;
}