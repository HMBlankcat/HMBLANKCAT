#include <iostream>
using namespace std;
class Person
{
public:
    void setName(string name)
    {
        m_Name = name;
    };
    string getName()
    {
        return m_Name;
    };
    int getAge()
    {
        m_Age = 0;
        return m_Age;
    };
    void setLover(string Lover)
    {
        m_Lover = Lover;
    };
    int setAge(int Age)
    {
        if (Age >= 0 || Age <= 150)
        {
            m_Age = Age;
        }
        else
        {
            cout << "�����������!"<<endl;
            return 0;
        };

    };
    
    

private:
    string m_Name;//�ɶ���д
    int m_Age;//�ɶ���д��������޸ģ�����ķ�Χ��0~150֮�䣩
    string m_Lover;//ֻд
};
int main()
{/*�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
2.����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��*/
    Person p;
    p.setName("����");
    cout <<"����Ϊ" <<p.getName() << endl;
    cout <<"����Ϊ" << p.getAge() << endl;
    p.setLover("wbc");


    system("pause");
    return 0;

}