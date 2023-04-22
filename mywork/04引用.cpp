/*引用作用：给变量起别名
语法：数据类型 &别名 = 原名*/
//注意事项：引用必须初始化，引用在初始化后不可以改变
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a ;
    //int &b;错误的，必须初始化
    int c = 20;
    //int &b = c;//错误的，不可以把b改变成c的别名
    b = 20;
    cout << a << endl;
    //a和b操作同一内存
    system("pause");
    return 0;

}