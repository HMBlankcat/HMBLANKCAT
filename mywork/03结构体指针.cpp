#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
int main()
{
    struct Student s1 = {};
    //����ѧ���ṹ�����
    struct Student s = {"����",18,100};

    //ͨ��ָ��ָ��ṹ�����
    Student * p = &s;


    //ͨ��ָ����ʽṹ������е�����
    cout << "����" <<p->name << "����" <<p->age << "����" << p->score << endl;
    
    system("pause");
    return 0;

}