/*   2  ��ӡ�Թ�(ѡ��)
ʵϰĿ�ģ��������һ��6x10��С���Թ����ӣ����������д��ڴ�ӡ��
ʵϰҪ������ͼ��ʾ���������ǽ���հ״������ͨ�С��Թ���ΧһȦΪǽ����һ����ߵڶ���Ϊ��ڣ����һ�е����ڶ���Ϊ���ڣ���2~5��2~9��Ϊ������ɵġ�*/
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

    // �������ͨ·
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 9; j++) {
            if (rand() % 10 < 4) { // 40%�ĸ����������һ����λ
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
