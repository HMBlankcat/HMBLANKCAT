/*选择结构:
if语句:执行满足条件的语句
1.单行 if(条件){条件满足执行的语句}
2.多行 if(条件){条件满足执行的语句}else{条件不满足执行的语句};
3.多条件 if(条件1){条件1满足执行的语句}else if(条件2){条件2满足执行的语句}...else{条件12不满足执行的语句};


*/
#include <iostream>
using namespace std;
int main(){
    int score = 0;
    cout << "请输入分数:" << endl;
    cin >> score;
    cout <<"您输入的分数为:" << score << endl;
    if(score > 600)
    {
        cout << "恭喜您考上一本大学" << endl;
        if (score > 700){
            cout << "您能考上北京大学" << endl;
        }
        else if(score >650){
            cout << "您能考入清华大学" << endl; 
        }
        else{
            cout << "您能考入人民大学" << endl;
        };
    }
    else if(500 <= score <= 600)
    {
        cout << "恭喜您考上二本大学" << endl;
    }
    else if(400 <= score < 500)
    {
        cout << "恭喜您考上三本大学" << endl;
    }
    else
    {
        cout << "未考上本科大学,滚去复读" << endl;

    };
    //if条件后面不要加分号









    system("pause");
    return 0;
}