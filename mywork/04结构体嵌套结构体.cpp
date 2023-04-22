
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
struct teacher
{
    int id;
    string name;
    int age;
    struct Student stu;//辅导的学生
//结构体中可以定义另一个结构体作为成员，用来解决实际问题    
};

int main()
{
    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score= 60;

    system("pause");
    return 0;

}