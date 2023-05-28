/*   2  打印迷宫(选做)
实习目的：随机生成一个6x10大小的迷宫格子，并在命令行窗口打印。
实习要求：如下图所示，方块代表墙，空白代表可以通行。迷宫周围一圈为墙，第一行左边第二个为入口，最后一行倒数第二个为出口，第2~5行2~9列为随机生成的。*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int height = 6;
const int width = 10;

int main()
{
   
    srand(time(NULL));

    char maze[height][width];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            maze[i][j] = 'O';
        }
    }

    // 随机生成通路
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 9; j++) {
            if (rand() % 10 < 4) { // 40%的概率随机生成一个空位
                maze[i][j] = ' ';
            }
        }
    }

    maze[0][1] = ' ';
    maze[5][8] = ' ';

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
