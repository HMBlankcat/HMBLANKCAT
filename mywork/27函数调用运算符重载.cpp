#include <iostream>
using namespace std;
class MyPrint
{
public:
    //���غ������������
    void operator()(string test)
    {
        cout <<test<<endl;
    }
};
void MyPrint02(string test)
{
    cout <<test<<endl;
};
void test01()
{
    MyPrint myPrint;
    myPrint("Hello World");//����ʹ�������ǳ������ں����Ͱ��ã���˳�Ϊ�º���
    MyPrint02("Hello World");
};
//�ź����ǳ���� û�й̶���д��
class MyAdd
{
public:
    int operator()(int num1,int num2)
    {
        return num1+num2;
    }
};
void test02()
{
    MyAdd myAdd;
    int ret = myAdd(10,10);
    cout <<ret<<endl;
    //������������
    cout<<MyAdd()(100,100)<<endl;
};
