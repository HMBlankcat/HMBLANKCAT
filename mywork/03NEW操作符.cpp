#include <iostream>
using namespace std;
    //1.new�Ļ����﷨
int * func()
{//new���ص���ָ��
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
    //����10���͵�����
    int * arr = new int[10] ;//10����������10��Ԫ��
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0 ; i < 10; i++)
    {
        cout << (arr[i]) << endl;

    }
    //�ͷŶ������飬Ҫ��[]�ſ���
    delete [] arr;
};
    //2.�ڶ�������new��������
int main()
{
//c++����new�������ڶ�����������
/*�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò�����delete
�﷨��new ��������
����new���������ݻᷴӳ�����ݶ�Ӧ�����͵�ָ��*/
    test02();
    //������ͷŶ����Ķ����ݣ�����delete

    system("pause");
    return 0;

}