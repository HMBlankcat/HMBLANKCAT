#include <iostream>
using namespace std;
//����������̳�ͬһ�����࣬����ĳ����ͬʱ�̳�������������
//���ּ̳б���Ϊ���μ̳У�������ʯ�̳�
class Animal
{
public:
    int m_Age;
};
//������̳У����Խ�����μ̳е�����
//�̳�֮ǰ�ӹؼ���virtual �����̳�
//animal���Ϊ�����
class Sheep:virtual public Animal{};
class Tuo:virtual public Animal{};
class SheepTuo:public Sheep,public Tuo{};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age=18;
    st.Tuo::m_Age=28;
    //�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ��������������
    cout << "SheepTuo������Ϊ��" << st.Sheep::m_Age << endl;
    cout << "SheepTuo������Ϊ��" << st.Tuo::m_Age << endl;
};//�����������֪�� ֻҪ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷�
int main()
{
    test01();
    return 0;
}