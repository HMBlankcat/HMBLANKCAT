
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
    struct Student stu;//������ѧ��
//�ṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������    
};

int main()
{
    teacher t;
    t.id = 10000;
    t.name = "����";
    t.age = 50;
    t.stu.name = "С��";
    t.stu.age = 20;
    t.stu.score= 60;

    system("pause");
    return 0;

}