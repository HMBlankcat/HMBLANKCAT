#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
/*2.4 �����Ϸ��Ŀ(ѡ��)
1 ���ʵ��һ�������ֵ�С��Ϸ��
��Ϸ��ʼʱ�ڳ����ڲ��������һ��4λ���֣�ÿһλ�ϵ�ֵ��ͬ������3795����
�û�ͨ�������ֵĳ�����ͼ�³������֣��²�������ܳ���8�Σ�
�ڰ˴������δ�¶�����ʾ�û��´μ���Ŭ���������˳���ÿһ�ֲ²���̰�����
1) �û�����һ���²����λ���֣�ÿһλֵ��ͬ����������3456��
2) ����Ƚ��û���������ֺͳ����ڲ�������ɵ����֣����ֵ�Ե�λ�ò�����һ����������B�ۼӣ�
���ֵ��λ��Ҳ�����������A�ۼӡ�
3) ���A��B���ۼ���Ϣ����ʾ�û������Ĳ²⣬��������3456�������1A 1B������1268��
�����0A 0B������5973������ʾ0A 4B������3795������ʾ�²�ɹ���*/

//���������
int main(int argc, char** argv)
{
	// ����rand()�����������
	int answer[4],guess[4];//�� �²����ִ洢������
    int A=0,B=0;//A BΪ��������
    bool found=false;//����Ƿ�¶���
    //���ɲ��ظ�����λ����
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

    cout <<"��ʼ��������Ϸ����!"<<endl;
    cout <<"����8�λ���"<<endl;
    cout <<"���ֵ�Ե�λ�ò�����һ����������B�ۼӣ����ֵ��λ��Ҳ�����������A�ۼӡ�"<<endl;
    for(int i=1;i<=8;i++)
    {
        cout<<"��"<<i<<"�β²�,������һ����λ���֣�ÿһλ�ϵ�ֵ��ͬ,��ÿ����һλ���ֺ�س�:";
        while(true)
        {
            cin>>guess[0]>>guess[1]>>guess[2]>>guess[3];
            if(guess[0]==guess[1]||guess[0]==guess[2]||guess[0]==guess[3]||guess[1]==guess[2]||guess[1]==guess[3]||guess[2]==guess[3])
            {
                cout<<"������������ظ�,����������:";
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
                        break;//�����ظ�����
                    }
                }
            }
        }
         cout << "�²���Ϊ��" << A << "A" << B << "B" << endl << endl;
         if(A==4)
         {
            found = true;
            break;
         };

    }
    if(found)
    {
        cout<<"��ϲ��¶���!"<<endl;
    }
    else
    {
        cout<<"���ź�,��û���ڰ˴����ڲ³�ȫ����ȷ������!����:";
        cout << answer[0] << answer[1] << answer[2] << answer[3] << endl;
    }

	return 0;

}