#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
/*2.1 ʹ������ʾ����ϰʹ���ж�����ж�������ƶ�����ѡ�����Ŀ�������ʵ�֡�
ĳ��λ�����ƶȹ涨���£�
��1��. �����ɲ���ְ���ʹ涨:
    ����Ա5kԪ;������ʦ7kԪ
    ����ʦ9kԪ���߼�����ʦ12kԪ;
    ����<10�겢��ƸΪ�߼�����ʦְ����Ϊ14kԪ
��2��.���䲹��:
10�����£�����1kԪ;
10��20�꣨��10���20�꣩������2kԪ
20�����ϣ�����3kԪ��
�ֱ��ʵ��������һְ�����ͼ����䣬���Ӧ�����ʡ�����д���������������Լ��ĳ���*/
void salary()
{
    
    string work_position_str[4]={"����Ա","������ʦ","����ʦ","�߼�����ʦ"};
    int salary=0;
    int work_age=0;
    int work_position=0;
    cout<<"������ְ������:";
    cout<<"1.����Ա ";
    cout<<"2.������ʦ ";
    cout<<"3.����ʦ ";
    cout<<"4.�߼�����ʦ "<<endl;
    while(true)
    {
        cin>>work_position;
        if(work_position==1 ||work_position==2 || work_position==3 || work_position==4)
        {
            break;
        }
        else
        {
            cout<<"�����������������"<<endl;
            continue;
        }
    }
    cout<<"�����빤��(��������,����Ϊ��λ):";

    while(true)
    {
        cin>>work_age;
        if(work_age>=0)
        {
            break;
        }
        else
        {
            cout<<"�����������������"<<endl;
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
    
    cout<<"����ְλ��:"<<work_position_str[work_position-1]<<",����Ϊ:"<<work_age<<"��,"<<"Ӧ���Ĺ���Ϊ:"<<salary<<"Ԫ"<<endl;
}

int main()
{
    salary();
    system("pause");
    return 0;
}

/*2.2 ��д����ʵ�����¹��ܣ�
�����Ŀ1����һ��ָ�����ı��ļ��ж���ְ�����ͺ͹��䣬����Ӧ��
�к� ְ������  ���� Ӧ������
�������һ���ļ���ȥ��*/