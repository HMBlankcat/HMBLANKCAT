#include <iostream>
using  namespace  std;
class Person
{
public:
    void showClassname()
    {
        cout <<"this is person class"<<endl;
    };
    void showpersonage()
    {//����ԭ������Ϊ�����ָ��ΪNULL
    if (this == NULL)
    {
        return;
    }
        cout<<"age="<<this->m_Age<<endl;
    
    };
    int m_Age;
};
void test01()
{
    Person * p = NULL;
    p->showClassname();
    p->showpersonage();
};

int main()
{
    test01();
    system ("pause");
    return 0;
}