#include <iostream>
using namespace std;
int main()
{
    //不建议使用
    cout << "1xxxx" << endl;
    cout << "2xxxx" << endl;
    goto FLAG;
    cout << "3xxxx" << endl;
    FLAG:
    cout << "4xxxx" << endl;













system("pause");
return 0;

}