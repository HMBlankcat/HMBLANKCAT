#include <iostream>
using namespace std;
int main(){
    //do..while���
    //����Ļ�����0��9��10������
    // int num = 0;
    // do{
    //     cout << num << endl;
    //     num++;

    // }
    // while (num < 10);
    //do while �� while����:do while����ִ��һ�����(����ִ��һ��)
    //ˮ�ɻ���
    /*��ȡ��λ::����ȡģ��10
    ��ȡʮλ:��������10�õ���λ��,��ȡģ��10�õ�ʮλ
    ��ȡ��λ:��100����*/
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
        }//�����ˮ�ɻ�����ӡ
        num++;
    }
    while (num < 1000);

    
    
    












system("pause");
return 0;

}