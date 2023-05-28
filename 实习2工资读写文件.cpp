#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
class Salary
{
public:
    string work_position_str[4]={"技术员","助理工程师","工程师","高级工程师"};
    int salary=0;
    int work_age=0;
    int work_position=0;
    void calculateSalary()
    {
        
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
        
    }

};
/*2.2 编写程序实现如下功能：
从一个指定的文本文件中读入职务类型和工龄，将相应的行号 职务类型  工龄 应发工资输出到另一个文件中去。*/
int main()
{
    ifstream fin("inputSalary.txt");
    if(!fin.is_open())
    {  
        cout<<"文件打开失败";
        return 0;
    };
    ofstream fout("outputSalary.txt");
    if(!fout.is_open())
    {  
        cout<<"文件打开失败";
        return 0;
    };
    vector<Salary> salarys;
    Salary salary;
    while(fin>>salary.work_position>>salary.work_age)
    {
        salary.calculateSalary();
        salarys.push_back(salary);
    }
    for(int i=0;i<salarys.size();i++)
    {
        fout<<"行号:"<<i+1<<" 职位:"<<salarys[i].work_position_str[salarys[i].work_position-1]<<" 工龄是:"<<salarys[i].work_age<<"年;  工资是:"<<salarys[i].salary<<"元"<<endl;
    }
    fin.close();
    fout.close();

    
    
    system("pause");
    return 0;
}

