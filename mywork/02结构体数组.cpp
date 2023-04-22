#include <iostream>
using namespace std;
#include <string>
struct Student
{
    string name;
    int age;
    int score;
};
int main()
{//结构体数组：作用：将自定义的结构体放到数组中方便维护
//struct 结构体名 数组名[元素个数] = {{}，{}，{}...，{}}
    struct Student stuArray[8] = 
    {
        {"张三",18,100},
        {"李四",28,99},
        {"王五",38,66}
    };
    stuArray[2].name="赵六";//赋值
    for (int i = 0 ; i < 3;i++)
    {
        cout <<"姓名：" << stuArray[i].name
        <<"年龄" <<stuArray[i].age
        <<"分数" << stuArray[i].score<<endl;   
    }
    system("pause");
    return 0;

}