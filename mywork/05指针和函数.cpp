#include <iostream>
using namespace std;
//ʵ���������ֽ���
void swap01(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
void swap02(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    //ָ��ͺ���
    //1.ֵ����  ����ı�ʵ��
    swap01(a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    //2.��ַ���� ��ı�ʵ��
    swap02(&a,&b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    system("pause");
    return 0;

}