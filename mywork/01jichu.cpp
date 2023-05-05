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
	
    //需求分析－－算法设计－－画流程图－－编写代码－－上机调试
    //数据类型
整数类型
    按照符号分 signed unsigned
    按数据范围分 short long   long long
    基本的整数类型 int
    单精度float 一个浮点  双精度double 两个浮点 扩展精度 long double
    浮点常量默认为double型，如果后缀F或f可以使其成为float型，例如12.3f
    自定义数据类型 class 类 enum 枚举 union 联合 struct 结构
        
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
    
数据类型   类型 名称 占用字节数 取值范围
    bool  布尔型 1 true,false
    (signed) char 有符号字符型 1 －128～127
    unsigned char 无符号字符型 1 0～255
    (signed) short(int) 有符号短整型 2 -32768~32767
    (signed)int 有符号整形  -2^31~2^31-1
    unsigned int 无符号整型 0~2^32-1
	
    unsigned long(int) 无符号长整型  0~2^32-1
    
    (signed) long(int) 有符号长整型 4 -2^31~2^31-1
    float 实型 4 -10^38~10^38
    double双精度型  -10^308~10^308
    long double 长双精度型 8 -10^308~10^308
    void 无值型 0 无值
    long long   8  -2^63~2^63-1
    unsigned long long 8 0~2^64-1

    typedef 已有类型名 新类型名表
    typedef double area,Volume;
    typedef int Natural;
    Natural i1,i2;
    Area a;
    Volume v;
    using 新类型名＝已有类型名;
    using area=double;
    using Volume  double;
auto 让编译器通过初始值自动推断变量类型
    



























    system("pause");
    return 0;


}
