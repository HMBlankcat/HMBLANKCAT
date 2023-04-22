#include <iostream>
using namespace std;
class Person
{
public:
    void setName(string name)
    {
        m_Name = name;
    };
    string getName()
    {
        return m_Name;
    };
    int getAge()
    {
        m_Age = 0;
        return m_Age;
    };
    void setLover(string Lover)
    {
        m_Lover = Lover;
    };
    int setAge(int Age)
    {
        if (Age >= 0 || Age <= 150)
        {
            m_Age = Age;
        }
        else
        {
            cout << "你这个老妖精!"<<endl;
            return 0;
        };

    };
    
    

private:
    string m_Name;//可读可写
    int m_Age;//可读可写，如果想修改（年龄的范围是0~150之间）
    string m_Lover;//只写
};
int main()
{/*优点1：将所有成员属性设置为私有，可以自己控制读写权限
2.对于写权限，我们可以监测数据的有效性*/
    Person p;
    p.setName("张三");
    cout <<"姓名为" <<p.getName() << endl;
    cout <<"年龄为" << p.getAge() << endl;
    p.setLover("wbc");


    system("pause");
    return 0;

}