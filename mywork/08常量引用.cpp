#include <iostream>
using namespace std;
void showValue(const int &val)
{
    //val = 1000;
    cout <<"val=" << val <<endl;
};

int main()
{
    //��������ʹ�ó����������βΣ���ֹ�����
    //int a = 10;
    //const int & ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
    //��const֮�󣬱������������޸�Ϊint temp = 10; int &ref = temp;
    //ref = 20;//���ʽ�����ǿ��޸ĵ���ֵ������const���Ϊֻ���������޸�
    int a = 100;//���������ó�����ֹ������޸�ʵ��
    showValue(a);
    cout <<"a=" << a << endl;

    system("pause");
    return 0;

}