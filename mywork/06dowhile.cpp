#include <iostream>
using namespace std;
int main(){
    //do..while语句
    //在屏幕中输出0道9折10个数字
    // int num = 0;
    // do{
    //     cout << num << endl;
    //     num++;

    // }
    // while (num < 10);
    //do while 和 while区别:do while会先执行一次语句(至少执行一次)
    //水仙花数
    /*获取个位::数字取模于10
    获取十位:数字整除10得到两位数,再取模于10得到十位
    获取百位:对100整除*/
    int num = 100;
    do
    {
        int a = 0;
        int b = 0;
        int c = 0;
        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;

        if(a*a*a + b*b*b + c*c*c == num)
        {
            cout << num << endl;
        }//如果是水仙花数打印
        num++;
    }
    while (num < 1000);

    
    
    












system("pause");
return 0;

}