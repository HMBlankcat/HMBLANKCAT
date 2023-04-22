#include <iostream>
/*函数定义步骤1.返回值类型 int
2.函数名 add
3.参数列表 (int num1,int num2)
4.函数体语句int sum = num1+num2
5.return表达式return num*/
//函数定义的时候,num1和num2并没有真实数据,他只是一个形式上的参数
//调用函数的时候,实参的值会传递给形参
using namespace std;
int add(int num1,int num2)
    {
        int sum = num1 + num2;
        return sum;
    }
void swap(int num1,int num2)
{
    cout << "交换前" << num1 << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后:" << num1 << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2" << num2 << endl;
    //return:返回值不需要的时候可以不写return
}
int main(){
    //加法函数 
    //返回值类型 函数名(参数列表) {函数体语句 return表达式}
    //函数调用语法:函数名称(参数)
    int c = add(10,20);
    cout <<"c=" << c << endl;
    int a = 10;
    int b = 20;
    swap(a,b);
    //值传递的时候,形参发生任何的改变,都不会影响实参
system("pause");
return 0;

}
/*值传递:函数调用时实参将数值传入给形参,如果行参发生变化,并不会影响实参*/
//如果函数不需要返回值,生命的时候可以写void
//形参是修饰不了实参的