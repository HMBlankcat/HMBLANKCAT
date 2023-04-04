//1.封装函数显示该界面 如void showMenu()
//2.在main函数中调用封装好的函数
#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
void showMenu()
{   cout <<"*********************"<<endl; 
    cout <<"*****1.添加联系人*****"<<endl;
    cout <<"*****2.显示联系人*****"<<endl;
    cout <<"*****3.删除联系人*****"<<endl;
    cout <<"*****4.查找联系人*****"<<endl;
    cout <<"*****5.修改联系人*****"<<endl;
    cout <<"*****6.清空联系人*****"<<endl;
    cout <<"*****0.退出通讯录*****"<<endl;
    cout <<"*********************"<<endl;
};
struct Person
{
    string m_Name;
    int m_Sex;//1男2女
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};
//1.添加联系人
void addPerson(Addressbooks * abs)
{
    //判断通讯录是否已满
    if (abs->m_Size == MAX)
    {
        cout<<"通讯录已满，无法添加！"<<endl;
        return;
    }
    else
    {
        string name;
        cout<<"请输入姓名："<<endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        cout<<"请输入性别："<<endl;
        cout<<"1---男，2---女"<<endl;
        int sex = 0;
        while (true)
        {//如果输入1，2可以退出循环，如果输入有误，重新输入
            cin >> sex;
            if (sex ==1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cin.clear();
            cin.ignore();
            cout <<"输入有误，请重新输入" <<endl;
        };
        cout << "请输入年龄：" <<endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        cout <<"请输入联系电话：" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        cout <<"请输入家庭住址" <<endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        //更新通讯录人数
        abs->m_Size++;
        cout <<"添加成功" <<endl;
        system("pause");
        system("cls");
    }
};
//2.显示联系人
void showPerson(Addressbooks * abs)

{
    //判断通讯录认输是否为0，如果为0，提示为空
    //如果不为0，显示信息
    if (abs->m_Size == 0)
    {
        cout <<"当前记录为空" << endl;
    }
    else
    {
        for (int i = 0;i < abs->m_Size ; i++)
        {
            cout <<"姓名："<<abs->personArray[i].m_Name<<"\t";
            cout <<"性别："<<(abs->personArray[i].m_Sex == 1 ?"男":"女")<<"\t";
            cout <<"年龄："<<abs->personArray[i].m_Age<<"\t";
            cout <<"电话："<<abs->personArray[i].m_Phone<<"\t";
            cout <<"地址："<<abs->personArray[i].m_Addr<<endl;
        }
    }
    system("pause");
    system("cls");
};
//3.删除联系人
int isExist(Addressbooks * abs,string name)//1通讯录 2对比姓名
{
    //检测联系人是否存在，存在返回位置，不存在返回-1
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
    cout <<"请输入你要删除的联系人："<<endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    {
        if (ret == -1)
        {
            cout << "查无此人。" << endl;
        }
        else
        {
            //要删除一个联系人，将后一个数据向前移动，并且让通讯录中记录人员-1即可
            for (int i = ret;i < abs->m_Size;i++)
            {
                abs->personArray[i] = abs->personArray[i + 1];
            }
            abs ->m_Size--;//更新人员数
            cout <<"删除成功。" << endl;
        }
    }
};
//4.查找联系人
void findPerson(Addressbooks * abs)
{
    cout<<"请输入您要查找的联系人:" <<endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
            cout <<"姓名："<<abs->personArray[ret].m_Name<<"\t";
            cout <<"性别："<<(abs->personArray[ret].m_Sex == 1 ?"男":"女")<<"\t";
            cout <<"年龄："<<abs->personArray[ret].m_Age<<"\t";
            cout <<"电话："<<abs->personArray[ret].m_Phone<<"\t";
            cout <<"地址："<<abs->personArray[ret].m_Addr<<endl;
    }
    else
    {
        cout <<"查无此人" << endl;    
    }
    system("pause");
    system("cls");
};
//5.修改联系人
void modifyPerson(Addressbooks * abs)
{
    cout <<"请输入您要修改的联系人：" <<endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
        string name;
        cout <<"请输入姓名：" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        cout <<"请输入性别" << endl;
        cout <<"1男2女" << endl;
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
                cout <<"输入错误，请重新输入" << endl;
            }
        }
        cout <<"请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;
        cout <<"请输入联系电话:" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;
        cout <<"请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;
        cout <<"修改成功" <<endl;
    }
    else
    {
        cout <<"未找到联系人" << endl;

    }
    system("pause");
    system("cls");
};
//6.清空联系人
void clearPerson(Addressbooks * abs)
{
    abs->m_Size = 0;//将当前记录的联系人数量置为0;
    cout <<"通讯录已清空" << endl;
    system("pause");
    system("cls");
}

int main()
{
    int select = 0;//创建用户选择输入的变量；
    Addressbooks abs;
        //初始化通讯录中当前人员个数
    abs. m_Size = 0;
    while (true)
    {
        showMenu();
        
        cin >> select;
        switch (select)
        {
            case 1:
            addPerson(&abs);//利用地址传递，可以修饰实参
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
            cout <<"欢迎下次使用" <<endl;
            system("pause");
            return 0;
            default:
            break;     
        }
    }
    system("pause");
    return 0;
}
