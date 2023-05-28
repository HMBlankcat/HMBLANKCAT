#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        this->m_Age=age;
        this->m_Name=name;
    }

    string m_Name;
    int m_Age;
};

void test01()
{
    vector<Person>v;
    Person p1("fyt",10);
    Person p2("xzh",20);
    Person p3("dfgdf",30);
    Person p4("ffg",40);
    Person p5("gjt",50);
    //向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    for(vector<Person>::iterator it = v.begin();it != v.end(); it++)
    {
        cout<<"姓名:"<<(*it).m_Name<<" 年龄:"<<(*it).m_Age<<endl;
    }
};

void test02()
{
    vector<Person*>v;
    Person p1("fyt",10);
    Person p2("xzh",20);
    Person p3("dfgdf",30);
    Person p4("ffg",40);
    Person p5("gjt",50);
    //向容器中添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    //遍历容器

    for(vector<Person*>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<"姓名:"<<(*it)->m_Name<<"年龄"<<(*it)->m_Age<<endl;
    }
};
int main()
{
    test01();
    test02();
    return 0;
}