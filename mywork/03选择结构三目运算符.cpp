#include <iostream>
using namespace std;
int main(){
    //��Ŀ����� ���ʽ1 ? ���ʽ2 : ���ʽ3
    //������ʽ1Ϊtrue,ִ�б��ʽ2;���ر��ʽ2���
    //������ʽ1λfalse,ִ�б��ʽ3,���ر��ʽ3�Ľ��
    //������������abc
    //��ab���Ƚ�,�������ֵ��ֵ��c
    int a = 10;
    int b = 20;
    int c =0;
    c = (a > b ? a : b);
    cout << "c=" << c << endl;
    //c++����Ŀ��������ص��Ǳ���,���Լ�����ֵ
    (a > b ? a : b)= 100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;





    system("pause");
    return 0;



}