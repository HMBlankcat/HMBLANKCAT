/*�ַ���ƴ��:ʵ�����ַ���ĩβƴ���ַ���
string& operator+=(const char* str);  ����+=������
string& operator+=(const char c);  ����+=������
string& operator+=(const string& str);  ����+=������
string& append(const char *s);  ���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s,int n);  ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);  ͬoperator+=(const string& str)
string& append(const string &s,int pos,int n);  ���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
string& append(int n,char c);  �ڵ�ǰ�ַ�����β���n���ַ�c
*/
#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string str1="��";
    str1+="������Ϸ";
    cout<<"str1="<<str1<<endl;
    str1 += ":";
    string str2="LOL dnf";
    str1+=str2;
    cout<<"str1="<<str1<<endl;
    str1+='!';
    cout<<"str1="<<str1<<endl;
    str1.append("haha");
    cout<<"str1="<<str1<<endl;
    str1.append("hehe",3);
    cout<<"str1="<<str1<<endl;
    string str3="I";
    str3.append("game",4);
    cout<<"str3="<<str3<<endl;
    str3.append(str1);
    cout<<"str3="<<str3<<endl;
    str3.append(str1,0,6);
    cout<<"str3="<<str3<<endl;
    str3.append(10,'x');
    cout<<"str3="<<str3<<endl;
    
    };



int main()
{
    test01();
    system("pause");
    return 0;

}