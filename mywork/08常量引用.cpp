#include <iostream>
using namespace std;
void showValue(const int &val)
{
    //val = 1000;
    cout <<"val=" << val <<endl;
};

int main()
{
    //常量引用使用场景：修饰形参，防止误操作
    //int a = 10;
    //const int & ref = 10;//引用必须引一块合法的内存空间
    //加const之后，编译器将代码修改为int temp = 10; int &ref = temp;
    //ref = 20;//表达式必须是可修改的左值，加入const后变为只读不可以修改
    int a = 100;//函数中利用常量防止误操作修改实参
    showValue(a);
    cout <<"a=" << a << endl;

    system("pause");
    return 0;

}