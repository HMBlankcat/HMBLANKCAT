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
{//�ṹ�����飺���ã����Զ���Ľṹ��ŵ������з���ά��
//struct �ṹ���� ������[Ԫ�ظ���] = {{}��{}��{}...��{}}
    struct Student stuArray[8] = 
    {
        {"����",18,100},
        {"����",28,99},
        {"����",38,66}
    };
    stuArray[2].name="����";//��ֵ
    for (int i = 0 ; i < 3;i++)
    {
        cout <<"������" << stuArray[i].name
        <<"����" <<stuArray[i].age
        <<"����" << stuArray[i].score<<endl;   
    }
    system("pause");
    return 0;

}