#include <iostream>
using namespace std;
int func2(int a ,int b, int c);//�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ��Ĭ�ϲ���
int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
};
int func2(int a , int b = 10,int c = 20)//��������һ��Ĭ��ֵ������ı��붼����Ĭ��ֵ
{
    return a+b+c;
}
int main()
{//c++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��
//����ֵ���� ������ (���� = Ĭ��ֵ);
    cout << func(10,30) << endl;
    


    system("pause");
    return 0;

}