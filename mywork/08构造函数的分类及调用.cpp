#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Person构造函数的调用"<<endl;
    }
    Person(int a)
    {
        age = a;
        cout<<"Person的有参构造函数调用"<<endl;
    };
    //拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
        cout <<"Person拷贝构造函数的调用" <<endl;
    };
    //2.析构函数 进行清理的操作
    ~Person()
    {
        cout <<"Person析构函数的调用" <<endl;
    };
    int age;
};

//调用
void test01()
{//1.括号法
    Person p;//默认构造函数调用
    //创建在栈区,局部变量,test01执行完毕后释放这个对象
    Person p2(10);//有参构造函数
    Person p3(p2);//拷贝构造函数

    cout<<"p2的年龄为"<<p2.age<<endl;
    cout<<"p3的年龄为"<<p3.age<<endl;
    //调用默认构造函数的时候,不要加小括号
    //下面这行代码,编译器会认为是一个函数的声明,不会认为在创建对象
    //Person p1();
    //2.显示法
    Person p1;
    Person p2 = Person(10);//有参构造
    Person p3 = Person(p2);//拷贝构造
    Person(10);//匿名对象,当前行执行结束后,系统会立即回收掉匿名对象
    cout <<"aaaaaa"<<endl;
    //注意事项2
    //不要利用拷贝构造函数 初始化匿名对象
    //Person(p3);
    //编译器会认为 Person(p3)===Person p3
     
    //3.隐式转换法
    Person p4 =10;//相当于写了 Person p4 = Person(10);  有参构造
    Person p5 = p4;//拷贝构造

//第二种和第三种尽量就别用了,容易被误认,建议用第一种!
};
int main()
{//两种分类方式:按参数分为有参和无参构造
//按类型分为普通和拷贝构造
//三种调用方式:括号法 显示法 隐式转换法
    test01();

    system("pause");
    return 0;

}