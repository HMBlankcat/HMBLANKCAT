//1.��װ������ʾ�ý��� ��void showMenu()
//2.��main�����е��÷�װ�õĺ���
#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
void showMenu()
{   cout <<"*********************"<<endl; 
    cout <<"*****1.�����ϵ��*****"<<endl;
    cout <<"*****2.��ʾ��ϵ��*****"<<endl;
    cout <<"*****3.ɾ����ϵ��*****"<<endl;
    cout <<"*****4.������ϵ��*****"<<endl;
    cout <<"*****5.�޸���ϵ��*****"<<endl;
    cout <<"*****6.�����ϵ��*****"<<endl;
    cout <<"*****0.�˳�ͨѶ¼*****"<<endl;
    cout <<"*********************"<<endl;
};
struct Person
{
    string m_Name;
    int m_Sex;//1��2Ů
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};
//1.�����ϵ��
void addPerson(Addressbooks * abs)
{
    //�ж�ͨѶ¼�Ƿ�����
    if (abs->m_Size == MAX)
    {
        cout<<"ͨѶ¼�������޷���ӣ�"<<endl;
        return;
    }
    else
    {
        string name;
        cout<<"������������"<<endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        cout<<"�������Ա�"<<endl;
        cout<<"1---�У�2---Ů"<<endl;
        int sex = 0;
        while (true)
        {//�������1��2�����˳�ѭ�����������������������
            cin >> sex;
            if (sex ==1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cin.clear();
            cin.ignore();
            cout <<"������������������" <<endl;
        };
        cout << "���������䣺" <<endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        cout <<"��������ϵ�绰��" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        cout <<"�������ͥסַ" <<endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        //����ͨѶ¼����
        abs->m_Size++;
        cout <<"��ӳɹ�" <<endl;
        system("pause");
        system("cls");
    }
};
//2.��ʾ��ϵ��
void showPerson(Addressbooks * abs)

{
    //�ж�ͨѶ¼�����Ƿ�Ϊ0�����Ϊ0����ʾΪ��
    //�����Ϊ0����ʾ��Ϣ
    if (abs->m_Size == 0)
    {
        cout <<"��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0;i < abs->m_Size ; i++)
        {
            cout <<"������"<<abs->personArray[i].m_Name<<"\t";
            cout <<"�Ա�"<<(abs->personArray[i].m_Sex == 1 ?"��":"Ů")<<"\t";
            cout <<"���䣺"<<abs->personArray[i].m_Age<<"\t";
            cout <<"�绰��"<<abs->personArray[i].m_Phone<<"\t";
            cout <<"��ַ��"<<abs->personArray[i].m_Addr<<endl;
        }
    }
    system("pause");
    system("cls");
};
//3.ɾ����ϵ��
int isExist(Addressbooks * abs,string name)//1ͨѶ¼ 2�Ա�����
{
    //�����ϵ���Ƿ���ڣ����ڷ���λ�ã������ڷ���-1
    for (int i = 0;i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
};
void deletePerson(Addressbooks * abs)
{
    cout <<"��������Ҫɾ������ϵ�ˣ�"<<endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    {
        if (ret == -1)
        {
            cout << "���޴��ˡ�" << endl;
        }
        else
        {
            //Ҫɾ��һ����ϵ�ˣ�����һ��������ǰ�ƶ���������ͨѶ¼�м�¼��Ա-1����
            for (int i = ret;i < abs->m_Size;i++)
            {
                abs->personArray[i] = abs->personArray[i + 1];
            }
            abs ->m_Size--;//������Ա��
            cout <<"ɾ���ɹ���" << endl;
        }
    }
};
//4.������ϵ��
void findPerson(Addressbooks * abs)
{
    cout<<"��������Ҫ���ҵ���ϵ��:" <<endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
            cout <<"������"<<abs->personArray[ret].m_Name<<"\t";
            cout <<"�Ա�"<<(abs->personArray[ret].m_Sex == 1 ?"��":"Ů")<<"\t";
            cout <<"���䣺"<<abs->personArray[ret].m_Age<<"\t";
            cout <<"�绰��"<<abs->personArray[ret].m_Phone<<"\t";
            cout <<"��ַ��"<<abs->personArray[ret].m_Addr<<endl;
    }
    else
    {
        cout <<"���޴���" << endl;    
    }
    system("pause");
    system("cls");
};
//5.�޸���ϵ��
void modifyPerson(Addressbooks * abs)
{
    cout <<"��������Ҫ�޸ĵ���ϵ�ˣ�" <<endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
        string name;
        cout <<"������������" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        cout <<"�������Ա�" << endl;
        cout <<"1��2Ů" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs ->personArray[ret].m_Sex = sex;
                break;
            }
            else
            {
                cout <<"�����������������" << endl;
            }
        }
        cout <<"����������" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;
        cout <<"��������ϵ�绰:" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;
        cout <<"�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;
        cout <<"�޸ĳɹ�" <<endl;
    }
    else
    {
        cout <<"δ�ҵ���ϵ��" << endl;

    }
    system("pause");
    system("cls");
};
//6.�����ϵ��
void clearPerson(Addressbooks * abs)
{
    abs->m_Size = 0;//����ǰ��¼����ϵ��������Ϊ0;
    cout <<"ͨѶ¼�����" << endl;
    system("pause");
    system("cls");
}

int main()
{
    int select = 0;//�����û�ѡ������ı�����
    Addressbooks abs;
        //��ʼ��ͨѶ¼�е�ǰ��Ա����
    abs. m_Size = 0;
    while (true)
    {
        showMenu();
        
        cin >> select;
        switch (select)
        {
            case 1:
            addPerson(&abs);//���õ�ַ���ݣ���������ʵ��
            break;
            case 2:
            showPerson(&abs);
            break;

            case 3:
            deletePerson(&abs);
            break;
            case 4:
            findPerson(&abs);
            break;
            case 5:
            modifyPerson(&abs);
            break;
            case 6:
            clearPerson(&abs);
            break;
            case 0:
            cout <<"��ӭ�´�ʹ��" <<endl;
            system("pause");
            return 0;
            default:
            break;     
        }
    }
    system("pause");
    return 0;
}