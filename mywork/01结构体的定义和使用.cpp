#include <iostream>
using namespace std;
#include <string>
struct Student
{//自定义数据类型，一些类型集合组成的一个类型
    //成员列表
    //姓名
    string name;

    //年龄
    int age;
    //分数
    int score;
}s3;

int main()
{
    //结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
    //struct 结构体名 {结构体成员列表};
    /*通过结构体创建变凉的方式有三种：
    1.struct 结构体名 变量名
    2.*/
    //通过学生类型创建具体学生
     struct Student s1;//给s1赋值，通过.访问结构体变量中的属性
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "姓名" << s1.name <<endl;
    struct Student s2={"李四" , 19 , 80};
    cout << "姓名" << s2.name <<endl;
    s3.name = "王五";
    s3.age = 20;
    s3.score = 60;
    cout << "姓名" << s3.name <<endl;
    system("pause");
    return 0;

}