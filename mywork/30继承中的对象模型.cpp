#include <iostream>
using namespace std;
//�̳��еĶ���ģ��
class Base
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
class Son:public Base
{
public:
    int d;

};
void test01()
{
    cout << "sizeofSon = " << sizeof(Son) << endl;
    cout << "sizeof(Base) = " << sizeof(Base) << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}