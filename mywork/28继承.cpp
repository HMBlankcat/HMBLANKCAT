#include <iostream>
using namespace std;
class Basepage
{
public:
    void header()
    {
        cout<<"首页、公开课、登录注册（公共头部）"<<endl;
        
    }
    void footer()
    {
        cout<<"帮助中心、网站合作、联系我们（公共底部）"<<endl;

    }
    void left()
    {
        cout<<"Java、Python、C++、PHP（公共左侧）"<<endl;
    }
};
class Java:public Basepage
{
public:
    void content()
    {
        cout<<"JAVA视频"<<endl;
    }
};
class Python:public Basepage
{
public:
    void content()
    {
        cout<<"Python视频"<<endl;
    }
};
class Cpp:public Basepage
{
public:
    void content()
    {
        cout<<"C++视频"<<endl;
    }
};//语法：class 子类：继承方式 父类
//子类也称为派生类 父类也称为基类
// class Java
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录注册（公共头部）"<<endl;
        
//     }
//     void footer()
//     {
//         cout<<"帮助中心、网站合作、联系我们（公共底部）"<<endl;

//     }
//     void left()
//     {
//         cout<<"Java、Python、C++、PHP（公共左侧）"<<endl;
//     }
//     void content()
//     {
//         cout<<"JAVA视频"<<endl;
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