/*���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�
�����ṹ�����飬�����д������Ӣ��
ͨ��ð������hero������������*/
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
        cout << "������" << Harray[i].name << "���䣺" << Harray[i].age << "�Ա�" <<Harray[i].sexual <<endl;
    };

};

int main()
{
    struct Hero Harray[5] = 
    {
        {"����",23,"��"},
        {"����",22,"��"},
        {"�ŷ�",20,"��"},
        {"����",21,"��"},
        {"����",19,"Ů"}
    };
    int len = sizeof(Harray) / sizeof(Harray[0]);
    bubblesort(Harray,len);
    printHero(Harray,len);

    system("pause");
    return 0;

}