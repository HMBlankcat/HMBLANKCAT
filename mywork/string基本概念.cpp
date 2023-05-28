/*string������һ����
char* ��һ��ָ��
string ��һ����,���ڲ���װ��char* ��������ַ�����һ��char*�͵�����,*/
/*�ص�:
string�ڲ���װ�˺ܶ��Ա����
eg:����find ����copy ɾ��delete �滻replace ����insert
string����char*��������ڴ� ���õ��ĸ���Խ���ȡֵԽ��,�����ڲ����и���*/

/*string()����һ���յ��ַ��� eg:string str;
string(const string& str)ʹ��string�����ʼ����һ��string����
string(const char* s)ʹ���ַ���s��ʼ��
string(int n,char c)ʹ��n���ַ�c��ʼ��*/

/*string��ֵ����:��string�ַ������и�ֵ
string& operator=(const char* s)  char*�����ַ���,���Ƹ���ǰ���ַ���
string& operator=(const string &s)  ���ַ���s������ǰ���ַ��� 
string& operator=(char c)  �ַ���ֵ����ǰ���ַ���
string& assign(const char* s)  ���ַ���s������ǰ���ַ���
string& assign(const char* s,int n)  ���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string& s)  ���ַ���s������ǰ���ַ���
string& assign(int n,char c)  ��n���ַ�c������ǰ���ַ���
string& assign(const string& s,int start,int n)  ��s��start��ʼn���ַ���ֵ���ַ���*/



#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string s1;
    const char* str = "hello world";
    string s2(str);
    cout<<"s2="<<s2<<endl;
    string s3(s2);
    cout<<"s3="<<s3<<endl;

    string s4(10,'a');
    cout<<"s4="<<s4<<endl;
};


void test02()
{
    string str1;
    str1="hello world";
    cout<<"str1="<<str1<<endl;

    string str2;
    str2=str1;
    cout<<"str2="<<str2<<endl;
    string str3;
    str3='a';
    cout<<"str3="<<str3<<endl;
    string str4;
    str4.assign("hello c++");
    cout<<"str4="<<str4<<endl;
    string str5;
    str5.assign("hello c++",5);
    cout<<"str5="<<str5<<endl;
    string str6;
    str6.assign(str5);
    cout<<"str6="<<str6<<endl;
    string str7;
    str7.assign(10,'w');
    cout<<"str7="<<str7<<endl;

};


int main()
{
    test02();
    test01();
    system("pause");
    return 0;
}