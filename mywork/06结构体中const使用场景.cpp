#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};

void printStudents(const Student *s)//加const防止函数体中的误操作
{
    //加入const后一旦有修改的操作就会报错
    //s->age=150;
    cout << "姓名：" <<s->name <<"年龄："<<s->age<<"分数:" <<s->score << endl;
};
int main()
{
    struct Student s = {"张三",15,70};
    //通过函数打印结构体变量信息
    cout << "main中张三原本年龄是：" <<s.age << endl;

    printStudents(&s);
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来


    system("pause");
    return 0;

}