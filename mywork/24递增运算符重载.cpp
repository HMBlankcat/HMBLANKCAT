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
    //����ǰ��++�����
    MyInteger& operator++()
    {
        m_Num++;
        //�ٽ�������
        return *this;
    }
    
    //���غ���++�����  
    MyInteger& operator++(int)//intռλ������û��ʵ������,������������ǰ�úͺ���
    {//����Ҫ����һ��ֵ
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