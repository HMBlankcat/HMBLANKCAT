#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/*2.3 ��д����
ʵ�ֽ�������ɵ��ַ���ת��Ϊ�������硱2345��(�ַ���)ת��Ϊ2345����������
Ҫ�ܴ�����������ԭ��Ϊ  int  StringToInt(char *str)��*/
int StringToInt(char *str)
{
    int result=0;
    int len=strlen(str);
    int i=0;
    int flag=1;
    if(str[0]=='-')
    {
        flag=-1;
        i++;
    }
    for(;i < len; i++)
    {
        result=result*10+str[i]-'0';
    }
    return result*flag;
};

int main()
{
    char str[100];
    cout<<"�������ַ���(���������)��";
    cin>>str;
    cout<<StringToInt(str)<<endl;
    return 0;
}