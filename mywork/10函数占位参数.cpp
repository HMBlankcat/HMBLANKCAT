#include <iostream>
using namespace std;
void func(int a,int = 10)
{
    cout <<"this is func" << endl;
};
int main()
{
    //占位参数
    //返回值类型 函数名 (数据类型) {}
    //目前阶段的占位参数 我们还用不到，后面课程中会用到
    //占位参数还可以有默认参数
    func(10,10);
    
    system("pause");
    return 0;

}