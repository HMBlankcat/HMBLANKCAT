/*ѡ��ṹ:
if���:ִ���������������
1.���� if(����){��������ִ�е����}
2.���� if(����){��������ִ�е����}else{����������ִ�е����};
3.������ if(����1){����1����ִ�е����}else if(����2){����2����ִ�е����}...else{����12������ִ�е����};


*/
#include <iostream>
using namespace std;
int main(){
    int score = 0;
    cout << "���������:" << endl;
    cin >> score;
    cout <<"������ķ���Ϊ:" << score << endl;
    if(score > 600)
    {
        cout << "��ϲ������һ����ѧ" << endl;
        if (score > 700){
            cout << "���ܿ��ϱ�����ѧ" << endl;
        }
        else if(score >650){
            cout << "���ܿ����廪��ѧ" << endl; 
        }
        else{
            cout << "���ܿ��������ѧ" << endl;
        };
    }
    else if(500 <= score <= 600)
    {
        cout << "��ϲ�����϶�����ѧ" << endl;
    }
    else if(400 <= score < 500)
    {
        cout << "��ϲ������������ѧ" << endl;
    }
    else
    {
        cout << "δ���ϱ��ƴ�ѧ,��ȥ����" << endl;

    };
    //if�������治Ҫ�ӷֺ�









    system("pause");
    return 0;
}