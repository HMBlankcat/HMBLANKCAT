#include <iostream>
using namespace std;
void func()
{
    cout <<"func�ĵ���" << endl;
};
void func(int a)
{
    cout <<"func�ĵ���!" << endl;
};
void func(double a)
{
    cout <<"func�ĵ���" << endl;
};
void func(double a,int b)
{
    cout <<"func�ĵ���" << endl;
};
void func(int a,double b)
{
    cout <<"func�ĵ���" << endl;
};
    //�����ķ���ֵ��������Ϊ�������ص�����
// int func()
// {
//     cout <<"func�ĵ���" << endl;
// };
int main()
{
    //������������ͬ����߸�����
    /*������������������1.ͬһ����������
    2.������������ͬ
    3.�����������Ͳ�ͬ���߸�����ͬ����˳��ͬ*/
    func();
    func(10);
    func(114.1);
    system("pause");
    return 0;


}