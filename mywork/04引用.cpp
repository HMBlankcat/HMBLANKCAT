/*�������ã������������
�﷨���������� &���� = ԭ��*/
//ע��������ñ����ʼ���������ڳ�ʼ���󲻿��Ըı�
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a ;
    //int &b;����ģ������ʼ��
    int c = 20;
    //int &b = c;//����ģ������԰�b�ı��c�ı���
    b = 20;
    cout << a << endl;
    //a��b����ͬһ�ڴ�
    system("pause");
    return 0;

}