#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};

void printStudents(const Student *s)//��const��ֹ�������е������
{
    //����const��һ�����޸ĵĲ����ͻᱨ��
    //s->age=150;
    cout << "������" <<s->name <<"���䣺"<<s->age<<"����:" <<s->score << endl;
};
int main()
{
    struct Student s = {"����",15,70};
    //ͨ��������ӡ�ṹ�������Ϣ
    cout << "main������ԭ�������ǣ�" <<s.age << endl;

    printStudents(&s);
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������


    system("pause");
    return 0;

}