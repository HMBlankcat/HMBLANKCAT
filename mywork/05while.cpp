#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>
int main(){/*while(循环条件){循环语句}*/
    //屏幕中打印0-9这10个数字
    /*int num = 0;
    
    while (num <= 9){
        cout << num << endl;
        num++;
        //执行循环语句时,程序必须提供跳出循环的出口,否则变成死循环
    }
    */
   //添加随机数种子,防止每次都一样,利用当前系统时间生成随机数
   srand((unsigned int)time(NULL));
    //系统生成随机数,玩家猜测,判断猜测,猜对退出,猜错提示过大过小,返回第二步
    int num = rand() % 100 + 1;//rand()%100 + 1生成0+1~99+1随机数
    // cout << num << endl;
    while (1) { 
        cout << "请输入猜测的数字" << endl;
        int val = 0;
        cin >> val;
        if (val > num){
            cout << "猜测过大" << endl;
        }
        else if (val < num){
            cout << "猜测过小" << endl;

        }
        else{
            cout << "猜测正确" << endl;
            break;
        }
    
    }











system("pause");
return 0;

}