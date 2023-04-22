//switch语句:执行
#include <iostream>
using namespace std;
int main(){
    //给电影打分捏10~9经典8~7非常好6~5一般5一下rubbish
    cout<<"请给电影打分:" << endl;
    int score = 0;
    cin >> score;
    cout << "您打的分数为:" << score << endl;
    switch (score)
    {
        case 10:
            cout << "您认为是经典电影" << endl;
            break;//退出当前分支
        case 9:
            cout << "您认为是经典电影" << endl;
            break; 
        case 8:
            cout << "您认为是非常好电影" << endl; 
            break;
        case 7:
            cout << "您认为是非常好电影" << endl; 
            break;
        case 6:
            cout << "您认为是一般电影" << endl; 
            break;
        case 5:
            cout << "您认为是一般电影" << endl; 
            break;
        default:
            cout << "您认为是烂片" << endl; 
            break;
    }
    system("pause");
    return 0;
}
//if和switch区别:switch缺点:判断时候只能是整形或字符型,不可以是一个区间
//switch优点:结构清晰,执行效率高
//case里如果没有break,程序会一直向下执行