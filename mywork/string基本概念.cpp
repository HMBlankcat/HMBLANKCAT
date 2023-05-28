/*string本质是一个类
char* 是一个指针
string 是一个类,类内部封装了char* 管理这个字符串是一个char*型的容器,*/
/*特点:
string内部封装了很多成员方法
eg:查找find 拷贝copy 删除delete 替换replace 插入insert
string管理char*所分配的内存 不用担心复制越界和取值越界,由类内部进行负责*/

/*string()创建一个空的字符串 eg:string str;
string(const string& str)使用string对象初始化另一个string对象
string(const char* s)使用字符串s初始化
string(int n,char c)使用n个字符c初始化*/

/*string赋值操作:给string字符串进行赋值
string& operator=(const char* s)  char*类型字符串,复制给当前的字符串
string& operator=(const string &s)  把字符串s赋给当前的字符串 
string& operator=(char c)  字符赋值给当前的字符串
string& assign(const char* s)  把字符串s赋给当前的字符串
string& assign(const char* s,int n)  把字符串s的前n个字符赋给当前的字符串
string& assign(const string& s)  把字符串s赋给当前的字符串
string& assign(int n,char c)  用n个字符c赋给当前的字符串
string& assign(const string& s,int start,int n)  将s从start开始n个字符赋值给字符串*/



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