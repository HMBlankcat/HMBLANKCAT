#include <iostream>
using namespace std;
//1.�޲��޷�
void test01()
{
    cout << "this is test01" << endl;
}
//2.�в��޷�
void test02(int a)
{
    cout << "this is test02 a =" << a << endl;
}
//3.�޲��з�
int test03()
{
    cout << "this is test03" << endl;
    return 1000;
}
//4.�в��з�
int test04(int a)
{
    cout <<"this is test 04 a =" << a <<endl;
    return a;
}
//����������:��ǰ���߱����������Ĵ���,�������ú���������
int max(int a,int b);//����
//���������ж��,������ֻ����һ��

int main(){/*����������ʽ*/
test01();
    test02(100);
    int num1 = test03();
    cout << "num1=" << num1 << endl;
    int num2 = test04(10000);
    cout <<"this is test04 a =" << num2 << endl;
    int a = 10;
    int b = 20;
    cout << max( a , b ) << endl;


    system("pause");
    return 0;

}
int max(int a, int b)
{
    return a > b ? a : b ;
}