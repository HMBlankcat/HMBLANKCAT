/*学校正在做毕设，每个老师带五名学生，总共三名老师
设计学生和老师的结构体，老师由姓名和存放5名学生的数组作为成员
学生成员有姓名考试分数，创建数组存放三名老师，通过函数给每个老师
及所带的学生赋值最终打印出老师数据以及老师所带的学生数据*/
#include <iostream>
using namespace std;
#include <string>
#include <ctime>
struct Student
{
    string sName;
    int score;
};
struct Teacher
{
    string tName;
    struct Student sArray[5];
};
void allocateSpace(struct Teacher tArray[] , int len)
{
    string nameSeed="ABCDE";
    //给老师赋值
    for (int i = 0;i < len;i++)
    {
        
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        //通过循环给每名学生所带的学生赋值
        for (int j = 0;j < 5;j++)
        {
            int random = rand() % 61 + 40;//40~100
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            tArray[i].sArray[j].score = random;
        }
    }
};
void printInfo(struct Teacher tArray[],int len)
{
    for (int i = 0;i < len; i++)
    {
        cout <<"老师姓名" << tArray[i].tName << endl;
        for (int j = 0;j < 5;j++)
        {
            cout <<"\t学生姓名" << tArray[i].sArray[j].sName<<"学生分数："<< tArray[i].sArray[j].score << endl;
        }
    }
    
};

int main()
{
    srand((unsigned int)time(NULL));
    struct Teacher tArray[3];
    int len=sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray,len);
    printInfo(tArray,len);

    system("pause");
    return 0;

}