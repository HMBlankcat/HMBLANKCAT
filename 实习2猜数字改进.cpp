#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// 生成不重复的四位数字
void generateAnswer(int answer[])
{
    answer[0] = rand() % 9 + 1 ;
    do
    {
        answer[1] = rand() % 10;
    } 
    while(answer[1] == answer[0]);

    do
    {
        answer[2] = rand() % 10;
    }
    while(answer[2] == answer[0] || answer[2] == answer[1]);

    do
    {
        answer[3] = rand() % 10;
    } 
    while(answer[3] == answer[0] || answer[3] == answer[1] || answer[3] == answer[2]);
}

// 检查用户输入的数字是否符合要求
bool checkInput(int guess[])
{
    bool valid = true;
    for(int i = 0; i < 4; i++)
    {
        if(guess[i] < 0 || guess[i] > 9)
        {
            valid = false;
            break;
        }

        for(int j = 0; j < i; j++)
        {
            if(guess[i] == guess[j])
            {
                valid = false;
                break;
            }
        }
    }

    return valid;
}

// 获取用户输入的数字
void getInput(int guess[])
{
    cout << "请输入一个四位数字（每一位上的值不同）:" << endl;
    while(true)
    {
        cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];

        if(!checkInput(guess))
        {
            cout << "输入的数字不符合要求，请重新输入:" << endl;
        }
        else
        {
            break;
        }
    };
}

// 比对用户输入和答案，返回A和B的数量
void compareAnswer(int answer[], int guess[], int& A, int& B)
{
    A = 0;
    B = 0;

    for(int i = 0; i < 4; i++)
    {
        if(guess[i] == answer[i])
        {
            A++;
        }
        else
        {
            for(int j = 0; j < 4; j++)
            {
                if(guess[i] == answer[j])
                {
                    B++;
                    break;
                }
            }
        }
    }
}

// 主函数
int main(int argc, char** argv)
{
    // 生成随机数种子
    srand(time(nullptr));

    int answer[4], guess[4];
    int A = 0, B = 0;
    bool found = false;

    generateAnswer(answer);

    cout << "=== 猜数字游戏 ===" << endl;
    cout << "你有8次机会来猜一个四位不重复的数字。" << endl;
    cout << "每猜一次，程序会告诉你猜中了几个数字以及它们的位置（用A表示），" << endl;
    cout << "猜中了几个数字但位置不正确（用B表示）。" << endl;
    cout << "准备好了吗？开始吧！" << endl;

    for(int i = 1; i <= 8; i++)
    {
        getInput(guess);

        compareAnswer(answer, guess, A, B);

        cout << "第" << i << "次猜测结果为：" << A << "A" << B << "B" << endl << endl;

        if(A == 4)
        {
            found = true;
            break;
        };
    }

    if(found)
    {
        cout << "恭喜你猜中了这个数字！" << endl;
    }
    else
    {
        cout << "很遗憾，你没有在8次以内猜中这个数字。答案是：" 
             << answer[0] << answer[1] << answer[2] << answer[3] << endl;
    }

    return 0;
}
