#include <iostream>
using namespace std;
int func2(int a ,int b, int c);//如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个默认参数
int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
};
int func2(int a , int b = 10,int c = 20)//假如有了一个默认值，后面的必须都得有默认值
{
    return a+b+c;
}
int main()
{//c++中，函数的形参列表中的形参是可以有默认值的
//返回值类型 函数名 (参数 = 默认值);
    cout << func(10,30) << endl;
    


    system("pause");
    return 0;

}