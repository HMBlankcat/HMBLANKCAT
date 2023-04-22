#include <iostream>
using namespace std;
class MyPrint
{
public:
    //重载函数调用运算符
    void operator()(string test)
    {
        cout <<test<<endl;
    }
};
void MyPrint02(string test)
{
    cout <<test<<endl;
};
void test01()
{
    MyPrint myPrint;
    myPrint("Hello World");//由于使用起来非常类似于函数低啊用，因此成为仿函数
    MyPrint02("Hello World");
};
//放函数非常灵活 没有固定的写法
class MyAdd
{
public:
    int operator()(int num1,int num2)
    {
        return num1+num2;
    }
};
void test02()
{
    MyAdd myAdd;
    int ret = myAdd(10,10);
    cout <<ret<<endl;
    //匿名函数对象
    cout<<MyAdd()(100,100)<<endl;
};
