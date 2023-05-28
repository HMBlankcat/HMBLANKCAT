#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/*2.3 编写函数
实现将数字组成的字符串转换为整数，如”2345”(字符串)转换为2345（整数），
要能处理负数。函数原型为  int  StringToInt(char *str)。*/
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
    cout<<"请输入字符串(由数字组成)：";
    cin>>str;
    cout<<StringToInt(str)<<endl;
    return 0;
}