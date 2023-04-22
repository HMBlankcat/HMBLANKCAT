#include <iostream>
using namespace std;
#include <string>//用c++风格字符串要包含这个头文件
int main(){
    int a = 10;//定义变量
    cout << "a==" << a <<endl;
    //单行注释
    /*多行注释*/
    //定义常量的方法
    //1.  #define 宏常量
    #define Day 7
    //2. const 数据类型 常量名 = 常量值 
    const int month = 12;
    cout <<"一年总共有"<<month<<"个月份"<<endl;
    //定义变量或者常量不要用关键字
    /*标识符只能由数字字母下划线组成
    第一个字符必须为字母或者下划线
    标识符中字母区分大小写*/
    
    //数据类型
    /*short 2字节 int 4字节 long 4字节 long long 8字节*/
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    //sizeof求出数据类型占用内存大小
    //语法：sizeof（数据类型/变量）
    cout<<"short占用内存空间为:"<< sizeof(num1)<<endl;
    //-------------------------------------------------------------------
    //实型：用于表示小数 单精度float 4字节 7位有效数字 双精度double 8字节 15-16位有效数字
    float f1 = 3.14f;//+f告诉他是单精度
    double f2 = 3.1415926535;
    //科学计数法
    float f3 = 3e2;//3*10^2;
    cout << "f3=" << f3 << endl;
    float f4 = 3e-2;//3*0.1^2
    //--------------------------------------------------
    //字符型变量用于显示单个字符
    char ch = 'a';//用单引号括起来,单引号内只能有一个字符,不能是字符串
    //c和c艹中字符型变量只占用一个字节
    cout << "char字符型变量所占内存:" << sizeof(char) << endl;
    cout << (int)ch << endl;
    //a-97       A-65 ascii码
    //------------------------------------------------------
    //转义字符 \n 换行,将当前位置移到下一行开头
    cout << "hello world\n";
    // 反斜杠 \\
    
    //水平制表符 \t  作用 整齐输出数据
    cout << "\\" << endl;
    cout << "aaa\thelloworld"<< endl;
    cout << "aa\thelloworld"<< endl;
    cout << "aaaaaaa\thelloworld"<< endl;
    //-------------------------------------------------------
    //c++风格字符串:string 变量名 = "字符串值" 
    //需要加头文件string
    string str2="hello world";
    //c风格字符串:char 字符串名[]="字符串值"
    //注意:等号后面要用双引号包含起来字符串
    char str[]="hello world";
    //--------------------------------------------------------------
    //布尔数据类型代表真或假的值
    bool flag = true;//true代表真
    cout << flag << endl;
    flag= false;
    cout << flag << endl;//本质上1代表真0代表假
    cout << "bool类型所占空间" << sizeof(flag) << endl;//1
    //------------------------------------------------------------
    //数据输入
    //cin >> 变量名
    int a = 0;
    cout <<"请给整型变量a赋值:"<< endl;
    cin >> a;
    //bool类型
    bool b = true;
    cin >> flag;
    //bool类型 只要是非0都代表真
    //-----------------------------------------------------
    //算术运算符 + - * / % ++ ++ -- --
    int a1 = 10;
    int b1 = 3;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;//两个整数相除,结果依然是整数,将小数部分去除
    //两个数相除,除数不可以为0  口雷瓦错误desu!
    //两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d1 / d2 << endl;//运算的结果也可以是小数
    cout << a1 % b1 << endl;
    //取模运算的本质就是求余数,2个小数之间不可以做取模运算
    //1.前置递增
    int a = 10;
    ++a;//让变量+1
    //2.后置递增
    int b = 10;//让变量+1
    b++;
    //前置和后置区别
    //前置:先变量++后表达式运算 后置相反
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2=" << a2 << endl;
    cout << "b2=" << b2 << endl;
    int a3 = 10;
    int b3 = a2++ * 10;
    cout << "a3=" << a3 << endl;
    cout << "b3=" << b3 << endl;
    //----------------------------------------------------------------
    //赋值运算符= += -= *= /= %=
    //比较运算符 == != < > <= >=
    //逻辑运算符 !非 &&与 ||或
    cout << !a << endl;
    cout << !!a << endl;
    //非 真变假,假变真
    //与 两个结果都为真结果才为真
    int a = 10;
    int b = 10;
    cout << (a && b) << endl;
    //与 同真为真,其余为假
    cout << (a || b) << endl;
    //或 同假为假其余为真
    































    system("pause");
    return 0;


}
