#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
//��ӡѧ����Ϣ
//1.ֵ����
void printStudent1(struct Student s)
{
    cout <<"�Ӻ����� ����"<<s.name<<"����"<<s.age<<"������"<<s.score<<endl;
};
//2.��ַ����
void printStudent2(struct Student *p)
{
    cout <<"�Ӻ���2�� ������"<<p->name<<"����"<<p->age<<"����"<<p->score<<endl;
};
int main()
{
//�ṹ������������
//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
//�����ṹ�����
    struct Student s;//��s��ֵ��ͨ��.���ʽṹ������е�����
    s.name = "����";
    s.age = 18;
    s.score = 100;
    printStudent1(s);
    printStudent2(&s);

    system("pause");
    return 0;

}//��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����