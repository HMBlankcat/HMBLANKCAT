#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
/*2.4 设计游戏题目(选做)
1 设计实现一个猜数字的小游戏。
游戏开始时在程序内部随机生成一个4位数字（每一位上的值不同，例如3795），
用户通过若干轮的尝试试图猜出该数字，猜测次数不能超过8次，
第八次如果仍未猜对则提示用户下次继续努力，程序退出。每一轮猜测过程包括：
1) 用户输入一个猜测的四位数字，每一位值不同，例如输入3456；
2) 程序比较用户输入的数字和程序内部随机生成的数字，如果值对但位置不对则一个计数变量B累加，
如果值对位置也对则计数变量A累加。
3) 输出A和B的累加信息以提示用户后续的猜测，例如输入3456，则输出1A 1B；输入1268，
则输出0A 0B；输入5973，则提示0A 4B；输入3795，则提示猜测成功。*/

//生成随机数
int main(int argc, char** argv)
{
	// 生成rand()的随机数种子
	int answer[4],guess[4];//答案 猜测数字存储的数组
    int A=0,B=0;//A B为计数变量
    bool found=false;//标记是否猜对了
    //生成不重复的四位数字
    answer[0]=rand() % 9 + 1 ;
    do
    {
        answer[1]=rand() % 10 ;
    } while(answer[1]==answer[0]);
    do
    {
        answer[2]=rand() %10;
    } while(answer[2]==answer[0]||answer[2]==answer[1]);
    do
    {
        answer[3]=rand() %10;
    } while(answer[3]==answer[0]||answer[3]==answer[1]||answer[3]==answer[2]);

    cout <<"开始猜数字游戏了捏!"<<endl;
    cout <<"你有8次机会"<<endl;
    cout <<"如果值对但位置不对则一个计数变量B累加，如果值对位置也对则计数变量A累加。"<<endl;
    for(int i=1;i<=8;i++)
    {
        cout<<"第"<<i<<"次猜测,请输入一个四位数字，每一位上的值不同,且每输入一位数字后回车:";
        while(true)
        {
            cin>>guess[0]>>guess[1]>>guess[2]>>guess[3];
            if(guess[0]==guess[1]||guess[0]==guess[2]||guess[0]==guess[3]||guess[1]==guess[2]||guess[1]==guess[3]||guess[2]==guess[3])
            {
                cout<<"输入的数字有重复,请重新输入:";
            }
            else
            {
                break;
            }
        };
        A=0;
        B=0;
        for(int j=0;j<4;j++)
        {
            if(guess[j]==answer[j])
            {
                A++;
            }
            else
            {
                for(int k=0;k<4;k++)
                {
                    if(guess[j]==answer[k])
                    {
                        B++;
                        break;//避免重复计数
                    }
                }
            }
        }
         cout << "猜测结果为：" << A << "A" << B << "B" << endl << endl;
         if(A==4)
         {
            found = true;
            break;
         };

    }
    if(found)
    {
        cout<<"恭喜你猜对了!"<<endl;
    }
    else
    {
        cout<<"很遗憾,你没有在八次以内猜出全部正确的数字!答案是:";
        cout << answer[0] << answer[1] << answer[2] << answer[3] << endl;
    }

	return 0;

}