#include <iostream>
using namespace std;
int main()//const可以修饰指针或者常量
{/*常量指针 特点:指针的指向可以修改,但是指针指向的值不可以修改*/
int a = 10;
int b = 10;
const int * p = &a;
/*   *p = 20;错误,指针指向的值不可以修改
 *   p=&b;正确,指针指向可以改*/
//指针常量:指针的指向不可以改,指针指向的值可以改
int * const p2 = &a;
/* *p2=20;正确,指针指向的值可以改
    p2=&b;错误,指针指向不可以改*/
    //const修饰常量和指针
    const int * const p3 = &a;
    //指针的指向和指针指向的值都不可以改
    /**p3=100;   p3=&b;都错误*/
    
system("pause");
return 0;

}