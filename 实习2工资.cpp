#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
/*2.1 使用如下示例练习使用判定表或判定树来设计多条件选择的题目，并编程实现。
某单位工资制度规定如下：
（1）. 技术干部的职务工资规定:
    技术员5k元;助理工程师7k元
    工程师9k元，高级工程师12k元;
    工龄<10年并受聘为高级工程师职务工资为14k元
（2）.工龄补助:
10年以下，补助1k元;
10到20年（含10年和20年），补助2k元
20年以上，补助3k元。
现编程实现输入任一职务类型及工龄，输出应发工资。并编写测试用例测试你自己的程序。*/
void salary()
{
    
    string work_position_str[4]={"技术员","助理工程师","工程师","高级工程师"};
    int salary=0;
    int work_age=0;
    int work_position=0;
    cout<<"请输入职务类型:";
    cout<<"1.技术员 ";
    cout<<"2.助理工程师 ";
    cout<<"3.工程师 ";
    cout<<"4.高级工程师 "<<endl;
    while(true)
    {
        cin>>work_position;
        if(work_position==1 ||work_position==2 || work_position==3 || work_position==4)
        {
            break;
        }
        else
        {
            cout<<"输入错误，请重新输入"<<endl;
            continue;
        }
    }
    cout<<"请输入工龄(输入整数,以年为单位):";

    while(true)
    {
        cin>>work_age;
        if(work_age>=0)
        {
            break;
        }
        else
        {
            cout<<"输入错误，请重新输入"<<endl;
            continue;
        }
    };

    switch(work_position)
    {
        case 1:
            salary=5000;
            break;
        case 2:
            salary=7000;
            break;
        case 3:
            salary=9000;
            break;
        case 4:
            if(work_age<10)
            {
                salary=14000;
                break;
            }
            else
            {
                salary=12000;
                break;
            }
        default:
            break;
    };

    if(work_age<10)
    {
        salary+=1000;
    }
    else if(work_age>=10 && work_age<=20)
    {
        salary+=2000;
    }
    else
    {
        salary+=3000;
    };
    
    cout<<"您的职位是:"<<work_position_str[work_position-1]<<",工龄为:"<<work_age<<"年,"<<"应发的工资为:"<<salary<<"元"<<endl;
}

int main()
{
    salary();
    system("pause");
    return 0;
}

/*2.2 编写程序实现如下功能：
针对题目1，从一个指定的文本文件中读入职务类型和工龄，将相应的
行号 职务类型  工龄 应发工资
输出到另一个文件中去。*/