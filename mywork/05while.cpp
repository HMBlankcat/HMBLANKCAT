#include <iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>
int main(){/*while(ѭ������){ѭ�����}*/
    //��Ļ�д�ӡ0-9��10������
    /*int num = 0;
    
    while (num <= 9){
        cout << num << endl;
        num++;
        //ִ��ѭ�����ʱ,��������ṩ����ѭ���ĳ���,��������ѭ��
    }
    */
   //������������,��ֹÿ�ζ�һ��,���õ�ǰϵͳʱ�����������
   srand((unsigned int)time(NULL));
    //ϵͳ���������,��Ҳ²�,�жϲ²�,�¶��˳�,�´���ʾ�����С,���صڶ���
    int num = rand() % 100 + 1;//rand()%100 + 1����0+1~99+1�����
    // cout << num << endl;
    while (1) { 
        cout << "������²������" << endl;
        int val = 0;
        cin >> val;
        if (val > num){
            cout << "�²����" << endl;
        }
        else if (val < num){
            cout << "�²��С" << endl;

        }
        else{
            cout << "�²���ȷ" << endl;
            break;
        }
    
    }











system("pause");
return 0;

}