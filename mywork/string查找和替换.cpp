#include <iostream>
#include <string>
using namespace std;
//字符串查找和替换
//1.查找
void test01()
{
    string str1="abcdefgde";

    int pos = str1.find("de");//返回第一次出现的位置
    if(pos == -1)
    {
        cout<<"未找到"<<endl;
    }
    else
    {
        cout<<"pos="<<pos<<endl;
    };
    //rfind
    pos=str1.rfind("de");//从右往左查找
    cout<<"pos="<<pos<<endl;
    //rfind和find区别
    //find从左往右查找 rfind从右往左查找
}



//2.替换


void test02()
{
    string str1="abcdefg";
    str1.replace(1,3,"1111");//从1号位置开始替换3个字符
    cout<<"str1="<<str1<<endl;

};
/*int find(const string& str,int pos = 0) const;查找str第一次出现位置,从pos开始查找
int find(const char* s,int pos=0) const;查找s第一次出现的位置,从pos开始寻找
*/

int main()
{
    test01();
    test02();
    return 0;
}