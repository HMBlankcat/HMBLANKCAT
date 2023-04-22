#include <iostream>
using namespace std;
//1.无参无返
void test01()
{
    cout << "this is test01" << endl;
}
//2.有参无返
void test02(int a)
{
    cout << "this is test02 a =" << a << endl;
}
//3.无参有返
int test03()
{
    cout << "this is test03" << endl;
    return 1000;
}
//4.有参有返
int test04(int a)
{
    cout <<"this is test 04 a =" << a <<endl;
    return a;
}
//函数的声明:提前告诉编译器函数的存在,可以利用函数的声明
int max(int a,int b);//声明
//声明可以有多次,但定义只能有一次

int main(){/*函数常见样式*/
test01();
    test02(100);
    int num1 = test03();
    cout << "num1=" << num1 << endl;
    int num2 = test04(10000);
    cout <<"this is test04 a =" << num2 << endl;
    int a = 10;
    int b = 20;
    cout << max( a , b ) << endl;


    system("pause");
    return 0;

}
int max(int a, int b)
{
    return a > b ? a : b ;
}