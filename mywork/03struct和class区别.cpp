#include <iostream>
using namespace std;
class c1
{

    int m_A;//Ĭ��Ȩ����˽��
};
struct c2
{
    int m_A;//Ĭ��Ȩ���ǹ���
};
int main()
{//struct��classΨһ����������Ĭ�ϵķ���Ȩ�޲�ͬ
    //structĬ��Ȩ���ǹ��� public
    //class Ĭ��Ȩ����˽�� private
    c1 c1;
    //c1.m_A = 100; Ĭ��˽��
    c2 c2;
    c2.m_A = 100;//Ĭ��public


    system("pause");
    return 0;

}