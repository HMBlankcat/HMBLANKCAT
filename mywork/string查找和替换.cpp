#include <iostream>
#include <string>
using namespace std;
//�ַ������Һ��滻
//1.����
void test01()
{
    string str1="abcdefgde";

    int pos = str1.find("de");//���ص�һ�γ��ֵ�λ��
    if(pos == -1)
    {
        cout<<"δ�ҵ�"<<endl;
    }
    else
    {
        cout<<"pos="<<pos<<endl;
    };
    //rfind
    pos=str1.rfind("de");//�����������
    cout<<"pos="<<pos<<endl;
    //rfind��find����
    //find�������Ҳ��� rfind�����������
}



//2.�滻


void test02()
{
    string str1="abcdefg";
    str1.replace(1,3,"1111");//��1��λ�ÿ�ʼ�滻3���ַ�
    cout<<"str1="<<str1<<endl;

};
/*int find(const string& str,int pos = 0) const;����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s,int pos=0) const;����s��һ�γ��ֵ�λ��,��pos��ʼѰ��
*/

int main()
{
    test01();
    test02();
    return 0;
}