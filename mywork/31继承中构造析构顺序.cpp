#include <iostream>
using namespace std;
//继承中的构造和析构顺序:先构造父类在构造子类，析构的顺序与构造顺序相反
class Base
{
public:
    Base()
    {
        cout<<"base的构造函数"<<endl;
    }
    ~Base()
    {
        cout<<"base的析构函数"<<endl;

    }

};
class Son:public Base
{
public:
    Son()
    {
        cout<<"Son的构造函数"<<endl;
    }
    ~Son()
    {
        cout<<"Son的析构函数"<<endl;

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