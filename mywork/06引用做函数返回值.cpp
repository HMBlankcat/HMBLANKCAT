#include <iostream>
using namespace std;
int& test01()
{
    int a = 10;//�ֲ������������ȥ�е�ջ��

    return a;
};
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
    static int a = 10;//��̬�����������ȫ����
    return a;
};
int main()
{
    int &ref = test01();
    cout << "ref = "<< ref << endl;//��һ�ν����ȷ������Ϊ���������˱���
    //cout << "ref = "<< ref << endl;//�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�
    int& ref2 = test02();
    test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
    cout <<"ref2" << ref2 << endl;

    
    //�����������ķ���ֵ
    //1.��Ҫ���ؾֲ�����������
    //2.�����ĵ��ÿ�����Ϊ��ֵ
    system("pause");
    return 0;

}