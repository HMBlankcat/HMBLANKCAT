#include <iostream>
using namespace std;
#include <string>
class Building
{
    friend class Goodgay;//Goodgay����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
public:
    Building();
public:
    string m_Sittingroom;
private:
    string m_bedroom;
};

class Goodgay
{
public:
    Goodgay();

public:

    Building * building;
    void visit();//�ιۺ��� ����building�е�����
    
};
Building::Building()//����д��Ա����
{
    m_Sittingroom = "����";
    m_bedroom = "����";

};
Goodgay::Goodgay()
{
//�������������
    building = new Building;
};
void Goodgay::visit()
{
    cout<<"�û��������ڷ���:"<<building->m_Sittingroom<<endl;
    cout<<"�û��������ڷ���:"<<building->m_bedroom<<endl;
};
void test01()
{
    Goodgay gg;
    gg.visit();
};
int main()
{
    test01();
    system("pause");
    return 0;
}