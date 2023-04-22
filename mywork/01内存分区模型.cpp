/*内存分区模型
代码区：存放函数体的二进制代码，由操作系统进行管理
全局区：存放全局变量和静态变量和常量
栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
堆区：由程序员分配和释放，若程序员不释放，程序结束时有操作系统回收
意义：不同区域存放的数据赋予不同的生命周期，给我们更大的灵活编程*/

/*程序运行前：在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域
代码区：存放CPU执行的机器指令
代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
代码区是只读的，原因是防止程序意外的修改了他的指令

全局区：全局变量和静态变量存放在此
全局区还包含了常量区，字符串常量和其他常量也存放在此
☆该区域的数据在程序结束后由操作系统释放*/

/*程序运行后
栈区：
注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放*/
//栈区的数据由编译器管理开辟释放
int* func(int b)//形参数据也会放在栈区
{
    b = 100;
    int a = 10;//局部变量   存放在栈区，栈区的数据在函数执行完后自动释放
    return &a;//返回局部变量地址
}
#include <iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;
//const修饰的全局变量，全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    //接受func函数的返回值
    //int * p = func(1);
    //cout << *p << endl;//第一次输出可以打印出正确的数据，编译器做了一次保留
//第二次这个数据就不会保留了，千万不要返回局部变量的地址。
    //全局区


    //全局变量、静态变量、常量

//创建一个普通局部变量
    int a = 10;
    int b = 10;
    cout <<"局部变量a的地址为:" << (long long)&a <<endl;
    cout <<"局部变量b的地址为:" << (long long)&b <<endl;
    cout <<"全局变量g_a的地址为:" << (long long)&g_a <<endl;
    cout <<"全局变量g_b的地址为:" << (long long)&g_b <<endl;
    //静态变量
    static int s_a = 10;
    cout <<"静态变量s_a的地址为:" << (long long)&s_a <<endl;
    //普通变量前加一个static，属于静态变量

    //常量 
    //字符串常量
    //const修饰的变量
    cout << "字符串常量hello world的地址是" <<(long long)"hello world" << endl;
    //const 修饰的变量
    //const 修饰的全局变量,const修饰的局部变量
    cout <<"全局常量c_g_a的地址为:"<<(long long)&c_g_a << endl;
    cout <<"全局常量c_g_b的地址为:"<<(long long)&c_g_b << endl;
    const int c_l_a = 10;//c-const  g-global l-local
    const int c_l_b = 10;
    cout <<"局部常量c_l_a的地址为:"<<(long long)&c_l_a << endl;
    cout <<"局部常量c_l_b的地址为:"<<(long long)&c_l_b << endl;
//局部修饰的无论变量常量，都和全局存放的区域不同
//局部变量、const修饰的局部变量（局部常量）不在全局区中
//全局变量、静态变量、常量（字符串常量 const修饰的全局变量（全局常量））、static关键字 在全局区中
    system("pause");
    return 0;

}