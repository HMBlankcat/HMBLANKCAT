#include <iostream>
/*�������岽��1.����ֵ���� int
2.������ add
3.�����б� (int num1,int num2)
4.���������int sum = num1+num2
5.return���ʽreturn num*/
//���������ʱ��,num1��num2��û����ʵ����,��ֻ��һ����ʽ�ϵĲ���
//���ú�����ʱ��,ʵ�ε�ֵ�ᴫ�ݸ��β�
using namespace std;
int add(int num1,int num2)
    {
        int sum = num1 + num2;
        return sum;
    }
void swap(int num1,int num2)
{
    cout << "����ǰ" << num1 << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "������:" << num1 << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2" << num2 << endl;
    //return:����ֵ����Ҫ��ʱ����Բ�дreturn
}
int main(){
    //�ӷ����� 
    //����ֵ���� ������(�����б�) {��������� return���ʽ}
    //���������﷨:��������(����)
    int c = add(10,20);
    cout <<"c=" << c << endl;
    int a = 10;
    int b = 20;
    swap(a,b);
    //ֵ���ݵ�ʱ��,�βη����κεĸı�,������Ӱ��ʵ��
system("pause");
return 0;

}
/*ֵ����:��������ʱʵ�ν���ֵ������β�,����вη����仯,������Ӱ��ʵ��*/
//�����������Ҫ����ֵ,������ʱ�����дvoid
//�β������β���ʵ�ε�