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
//继承方式
//公共继承
class Son1:public Base1
{
public:
    void func()
    {
        a=10;
        //父类中的公共权限成员 在子类中仍然是公共权限
        b=20;//父类中的保护权限成员 在子类中仍然是保护权限
        //c=30;//父类中的私有权限成员 在子类中是不可访问的
    }

};
void test01()
{
    Son1 s1;
    s1.a=100;
    //s1.b=200;//保护权限成员不可访问
}
//保护继承
class Son2:protected Base1
{
public:
    void func()
    {
        a=10;
        //父类中的公共权限成员 在子类中仍然是保护权限
        b=20;//父类中的保护权限成员 在子类中仍然是保护权限
        //c=30;//父类中的私有权限成员 在子类中是不可访问的
    }
};
void test02()
{
    Son2 s2;
    //s2.a=100;//保护权限成员不可访问
    //s2.b=200;//保护权限成员不可访问
};

//私有继承
class Son3:private Base1
{
public:
    void func()
    {
        a=10;
        //父类中的公共权限成员 在子类中仍然是私有权限
        b=20;//父类中的保护权限成员 在子类中仍然是私有权限
        //c=30;//父类中的私有权限成员 在子类中是不可访问的
    }
};
class Grandson3:public Son3
{
public:
    void func()
    {
        //a=10;//私有权限成员不可访问
        //b=20;//私有权限成员不可访问
    }
};
int main()
{
    system("pause");
    return 0;
}