#include <iostream>
using namespace std;
/*访问权限：三种
1.公共权限  public  成员类内可以访问，外也可以访问
2.保护权限  protected 成员类内可以访问，类外不可以访问 子类可以继承父类
3.私有权限 private 成员类内可以访问，类外不可以访问   子类不可以继承父类*/
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
        m_Name = "张三";
        m_car = "拖拉机";
        m_password = "123456";
    };
};
int main()
{
    Person p1;
    p1.m_Name = "lisi";
    //p1.car = "wtf";保护权限内容，类外访问不到
    //p1.m_password = 123;私有权限内容，类外访问不到
    p1.func();




    system("pause");
    return 0;

}