#include <iostream>
using namespace std;
int main(){
    //三目运算符 表达式1 ? 表达式2 : 表达式3
    //如果表达式1为true,执行表达式2;返回表达式2结果
    //如果表达式1位false,执行表达式3,返回表达式3的结果
    //创建三个变量abc
    //将ab作比较,变量大的值赋值给c
    int a = 10;
    int b = 20;
    int c =0;
    c = (a > b ? a : b);
    cout << "c=" << c << endl;
    //c++中三目运算符返回的是变量,可以继续赋值
    (a > b ? a : b)= 100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;





    system("pause");
    return 0;



}