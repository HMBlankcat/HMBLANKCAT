#include <iostream>
using namespace std;
void func()
{
    cout <<"func的调用" << endl;
};
void func(int a)
{
    cout <<"func的调用!" << endl;
};
void func(double a)
{
    cout <<"func的调用" << endl;
};
void func(double a,int b)
{
    cout <<"func的调用" << endl;
};
void func(int a,double b)
{
    cout <<"func的调用" << endl;
};
    //函数的返回值不可以作为函数重载的条件
// int func()
// {
//     cout <<"func的调用" << endl;
// };
int main()
{
    //函数名可以相同，提高复用性
    /*函数重载满足条件：1.同一个作用域下
    2.函数名称下相同
    3.函数参数类型不同或者个数不同或者顺序不同*/
    func();
    func(10);
    func(114.1);
    system("pause");
    return 0;


}