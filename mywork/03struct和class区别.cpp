#include <iostream>
using namespace std;
class c1
{

    int m_A;//默认权限是私有
};
struct c2
{
    int m_A;//默认权限是公共
};
int main()
{//struct和class唯一的区别在于默认的访问权限不同
    //struct默认权限是公共 public
    //class 默认权限是私有 private
    c1 c1;
    //c1.m_A = 100; 默认私有
    c2 c2;
    c2.m_A = 100;//默认public


    system("pause");
    return 0;

}