#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Person���캯���ĵ���"<<endl;
    }
    Person(int a)
    {
        age = a;
        cout<<"Person���вι��캯������"<<endl;
    };
    //�������캯��
    Person(const Person &p)
    {
        age = p.age;
        cout <<"Person�������캯���ĵ���" <<endl;
    };
    //2.�������� ��������Ĳ���
    ~Person()
    {
        cout <<"Person���������ĵ���" <<endl;
    };
    int age;
};

//����
void test01()
{//1.���ŷ�
    Person p;//Ĭ�Ϲ��캯������
    //������ջ��,�ֲ�����,test01ִ����Ϻ��ͷ��������
    Person p2(10);//�вι��캯��
    Person p3(p2);//�������캯��

    cout<<"p2������Ϊ"<<p2.age<<endl;
    cout<<"p3������Ϊ"<<p3.age<<endl;
    //����Ĭ�Ϲ��캯����ʱ��,��Ҫ��С����
    //�������д���,����������Ϊ��һ������������,������Ϊ�ڴ�������
    //Person p1();
    //2.��ʾ��
    Person p1;
    Person p2 = Person(10);//�вι���
    Person p3 = Person(p2);//��������
    Person(10);//��������,��ǰ��ִ�н�����,ϵͳ���������յ���������
    cout <<"aaaaaa"<<endl;
    //ע������2
    //��Ҫ���ÿ������캯�� ��ʼ����������
    //Person(p3);
    //����������Ϊ Person(p3)===Person p3
     
    //3.��ʽת����
    Person p4 =10;//�൱��д�� Person p4 = Person(10);  �вι���
    Person p5 = p4;//��������

//�ڶ��ֺ͵����־����ͱ�����,���ױ�����,�����õ�һ��!
};
int main()
{//���ַ��෽ʽ:��������Ϊ�вκ��޲ι���
//�����ͷ�Ϊ��ͨ�Ϳ�������
//���ֵ��÷�ʽ:���ŷ� ��ʾ�� ��ʽת����
    test01();

    system("pause");
    return 0;

}