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
    {//报错原因是因为传入的指针为NULL
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