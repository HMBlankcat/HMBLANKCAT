#include <iostream>
using namespace std;
#include <string>
struct Student
{//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
    //��Ա�б�
    //����
    string name;

    //����
    int age;
    //����
    int score;
}s3;

int main()
{
    //�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
    //struct �ṹ���� {�ṹ���Ա�б�};
    /*ͨ���ṹ�崴�������ķ�ʽ�����֣�
    1.struct �ṹ���� ������
    2.*/
    //ͨ��ѧ�����ʹ�������ѧ��
     struct Student s1;//��s1��ֵ��ͨ��.���ʽṹ������е�����
    s1.name = "����";
    s1.age = 18;
    s1.score = 100;
    cout << "����" << s1.name <<endl;
    struct Student s2={"����" , 19 , 80};
    cout << "����" << s2.name <<endl;
    s3.name = "����";
    s3.age = 20;
    s3.score = 60;
    cout << "����" << s3.name <<endl;
    system("pause");
    return 0;

}