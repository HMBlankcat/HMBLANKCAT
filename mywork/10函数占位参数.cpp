#include <iostream>
using namespace std;
void func(int a,int = 10)
{
    cout <<"this is func" << endl;
};
int main()
{
    //ռλ����
    //����ֵ���� ������ (��������) {}
    //Ŀǰ�׶ε�ռλ���� ���ǻ��ò���������γ��л��õ�
    //ռλ������������Ĭ�ϲ���
    func(10,10);
    
    system("pause");
    return 0;

}