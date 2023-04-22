#include <iostream>
#include "swap.h"
using namespace std;

// void swap(int a , int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;

// }
//1.创建.h后缀名的头文件
//2.创建.cpp后缀名的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    system("pause");
    return 0;

}