#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
class Salary
{
public:
    string work_position_str[4]={"����Ա","������ʦ","����ʦ","�߼�����ʦ"};
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
/*2.2 ��д����ʵ�����¹��ܣ�
��һ��ָ�����ı��ļ��ж���ְ�����ͺ͹��䣬����Ӧ���к� ְ������  ���� Ӧ�������������һ���ļ���ȥ��*/
int main()
{
    ifstream fin("inputSalary.txt");
    if(!fin.is_open())
    {  
        cout<<"�ļ���ʧ��";
        return 0;
    };
    ofstream fout("outputSalary.txt");
    if(!fout.is_open())
    {  
        cout<<"�ļ���ʧ��";
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
        fout<<"�к�:"<<i+1<<" ְλ:"<<salarys[i].work_position_str[salarys[i].work_position-1]<<" ������:"<<salarys[i].work_age<<"��;  ������:"<<salarys[i].salary<<"Ԫ"<<endl;
    }
    fin.close();
    fout.close();

    
    
    system("pause");
    return 0;
}

