/*设计一个英雄的结构体，包括成员姓名，年龄，性别；
创建结构体数组，数组中存放五名英雄
通过冒泡排序将hero按照年龄排序*/
#include <iostream>
using namespace std;
#include <string>
struct Hero
{
    string name;
    int age;
    string sexual;
};
void bubblesort(struct Hero Harray[],int len)
{
    for (int i = 0;i < len - 1;i++)
    {
        for (int j = 0 ; j < len - i - 1;j++)
        {
            
            if (Harray[j].age > Harray[j+1].age)
            {
                struct Hero temp = Harray[j];
                Harray[j] = Harray[j+1];
                Harray[j+1] = temp;

            }
        }
    }
};
void printHero(struct Hero Harray[],int len)
{
    for (int i = 0;i < len;i++)
    {
        cout << "姓名：" << Harray[i].name << "年龄：" << Harray[i].age << "性别：" <<Harray[i].sexual <<endl;
    };

};

int main()
{
    struct Hero Harray[5] = 
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };
    int len = sizeof(Harray) / sizeof(Harray[0]);
    bubblesort(Harray,len);
    printHero(Harray,len);

    system("pause");
    return 0;

}