#include <iostream>
using namespace std;
void func(int& ref)
{//���������ã��Զ�ת��Ϊ int* const ref = &a
    ref = 100;//ref�����ã�ת��Ϊ*ref=100
};
int main()
{
    //���õı�����c++�ڲ�ʵ����һ��ָ�볣��
    //���õı��� ����һ��ָ�볣����һ����ʼ����Ͳ��ɷ����ı�
    int a = 10;
    int &ref = a;
    //�Զ�ת��Ϊ int* const ref = &a��ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
    ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ*ref = 20��

    cout << "a:" << a << endl;
    cout << "ref:" << ref << endl;
    func(a);
    system("pause");
    return 0;

}//c++�������е�ָ����������������������� 