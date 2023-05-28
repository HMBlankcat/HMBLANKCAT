#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// ���ɲ��ظ�����λ����
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

// ����û�����������Ƿ����Ҫ��
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

// ��ȡ�û����������
void getInput(int guess[])
{
    cout << "������һ����λ���֣�ÿһλ�ϵ�ֵ��ͬ��:" << endl;
    while(true)
    {
        cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];

        if(!checkInput(guess))
        {
            cout << "��������ֲ�����Ҫ������������:" << endl;
        }
        else
        {
            break;
        }
    };
}

// �ȶ��û�����ʹ𰸣�����A��B������
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

// ������
int main(int argc, char** argv)
{
    // �������������
    srand(time(nullptr));

    int answer[4], guess[4];
    int A = 0, B = 0;
    bool found = false;

    generateAnswer(answer);

    cout << "=== ��������Ϸ ===" << endl;
    cout << "����8�λ�������һ����λ���ظ������֡�" << endl;
    cout << "ÿ��һ�Σ���������������˼��������Լ����ǵ�λ�ã���A��ʾ����" << endl;
    cout << "�����˼������ֵ�λ�ò���ȷ����B��ʾ����" << endl;
    cout << "׼�������𣿿�ʼ�ɣ�" << endl;

    for(int i = 1; i <= 8; i++)
    {
        getInput(guess);

        compareAnswer(answer, guess, A, B);

        cout << "��" << i << "�β²���Ϊ��" << A << "A" << B << "B" << endl << endl;

        if(A == 4)
        {
            found = true;
            break;
        };
    }

    if(found)
    {
        cout << "��ϲ�������������֣�" << endl;
    }
    else
    {
        cout << "���ź�����û����8�����ڲ���������֡����ǣ�" 
             << answer[0] << answer[1] << answer[2] << answer[3] << endl;
    }

    return 0;
}
