/*���ã����������ԣ������������õļ������β�����ʵ��
�ŵ㣺���Լ�ָ���޸�ʵ��*/
//ͨ�����ò���������Ч��ͬ����ַ������һ���ģ����õ��﷨����
//��������
//1.ֵ����

#include <iostream>
using namespace std;
void mySwap01(int a , int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout <<"swap01a=" << a <<endl;
    cout <<"swap01b=" << b <<endl;

};
//2.��ַ����
void myswap02(int * a ,int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

};
//3.���ô���
int myswap03(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
};
int main()
{
    int a = 10;
    int b  = 20;
    //mySwap01(a,b);ֵ���ݣ��ββ�������ʵ��
    //myswap02(&a,&b);��ַ���ݣ��βλ�����ʵ��
    myswap03(a,b);//���ô��ݣ��βλ�����ʵ��
    cout << "a=" << a <<endl;
    cout <<"b=" << b <<endl;

    


    system("pause");
    return 0;

}