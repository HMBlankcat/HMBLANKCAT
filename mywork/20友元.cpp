#include <iostream>
using namespace std;
#include <string>
class Building
{
    friend void goodgay(Building *building);//ȫ�ֺ����Ǳ���ĺ�����,���Է���˽�г�Ա
public:
    string m_Sitting_room;//����
    Building()
    {
        m_Sitting_room="����";
        m_Bedroom="����";
    }
private:
    string m_Bedroom;//����
};
//ȫ�ֺ���
void goodgay(Building *building)
{
    cout <<"�û��ѵ�ȫ�ֺ������ڷ���;"<<building->m_Sitting_room<<endl;
    cout <<"�û��ѵ�ȫ�ֺ������ڷ���;"<<building->m_Bedroom<<endl;
};
void test01()
{
    Building building;
    goodgay(&building);
};
int main()
{
    test01();
    system("pause");
    return 0;
}