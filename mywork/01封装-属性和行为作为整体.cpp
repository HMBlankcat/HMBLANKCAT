#include <iostream>
using namespace std;
const double PI = 3.14;
class Student
{//类中的属性和成员，我们统一称为成员
//属性 成员属性 成员变量
//行为 成员函数 成员方法 
//属性 
public:
    string name;
    int xuehao;
    void getNameandXuehao()
    {
        cout << "学生姓名：" << name << "," << "学生学号：" << xuehao << endl;
    }
};
class Circle
{
    //访问权限
public://公共权限

    //属性
    //半径
    int m_r;
    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};
int main()
{//c++面向对象的三大特性为：封装、继承、多态
//设计一个圆类，求圆的周长
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长：" << c1.calculateZC() << endl;
    Student s1;
    s1.name = "shit";
    s1.xuehao = 114514;
    s1.getNameandXuehao();
    system("pause");
    return 0;

}