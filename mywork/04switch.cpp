//switch���:ִ��
#include <iostream>
using namespace std;
int main(){
    //����Ӱ�����10~9����8~7�ǳ���6~5һ��5һ��rubbish
    cout<<"�����Ӱ���:" << endl;
    int score = 0;
    cin >> score;
    cout << "����ķ���Ϊ:" << score << endl;
    switch (score)
    {
        case 10:
            cout << "����Ϊ�Ǿ����Ӱ" << endl;
            break;//�˳���ǰ��֧
        case 9:
            cout << "����Ϊ�Ǿ����Ӱ" << endl;
            break; 
        case 8:
            cout << "����Ϊ�Ƿǳ��õ�Ӱ" << endl; 
            break;
        case 7:
            cout << "����Ϊ�Ƿǳ��õ�Ӱ" << endl; 
            break;
        case 6:
            cout << "����Ϊ��һ���Ӱ" << endl; 
            break;
        case 5:
            cout << "����Ϊ��һ���Ӱ" << endl; 
            break;
        default:
            cout << "����Ϊ����Ƭ" << endl; 
            break;
    }
    system("pause");
    return 0;
}
//if��switch����:switchȱ��:�ж�ʱ��ֻ�������λ��ַ���,��������һ������
//switch�ŵ�:�ṹ����,ִ��Ч�ʸ�
//case�����û��break,�����һֱ����ִ��