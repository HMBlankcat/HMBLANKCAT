#include <iostream>
using namespace std;
    //1.new的基本语法
int * func()
{//new返回的是指针
    int *p =new int(10);
    return p;
};
void test01()
{
    int * p = func();
    cout << *p << endl;
    delete p;
    //cout << *p << endl;

};
void test02()
{
    //创建10整型的数组
    int * arr = new int[10] ;//10代表数组有10个元素
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0 ; i < 10; i++)
    {
        cout << (arr[i]) << endl;

    }
    //释放堆区数组，要加[]才可以
    delete [] arr;
};
    //2.在堆区利用new开辟数组
int main()
{
//c++利用new操作符在堆区开辟数据
/*堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
语法：new 数据类型
利用new创建的数据会反映该数据对应的类型的指针*/
    test02();
    //如果想释放堆区的额数据，利用delete

    system("pause");
    return 0;

}