/*字符串拼接:实现在字符串末尾拼接字符串
string& operator+=(const char* str);  重载+=操作符
string& operator+=(const char c);  重载+=操作符
string& operator+=(const string& str);  重载+=操作符
string& append(const char *s);  把字符串s连接到当前字符串结尾
string& append(const char *s,int n);  把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);  同operator+=(const string& str)
string& append(const string &s,int pos,int n);  把字符串s中从pos开始的n个字符连接到当前字符串结尾
string& append(int n,char c);  在当前字符串结尾添加n个字符c
*/
#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string str1="我";
    str1+="爱玩游戏";
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