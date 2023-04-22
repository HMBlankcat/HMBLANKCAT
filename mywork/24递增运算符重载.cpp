#include <iostream>
using namespace std;
class MyInteger
{
friend ostream& operator<<(ostream& cout,MyInteger myint);
private:
    int m_Num;
public:
    MyInteger()
    {
        m_Num = 0;
    }
    //重载前置++运算符
    MyInteger& operator++()
    {
        m_Num++;
        //再将自身返回
        return *this;
    }
    
    //重载后置++运算符  
    MyInteger& operator++(int)//int占位参数，没有实际意义,可以用来区分前置和后置
    {//后置要返回一个值
        MyInteger &temp =*this;
        m_Num++;
        return temp;
    };
};
ostream& operator<<(ostream& cout,MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
};
void test01()
{
    MyInteger myInt;
    cout <<++myInt<<endl;
};
void test02()
{
    MyInteger myInt;
    cout <<myInt++<<endl;
};
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}