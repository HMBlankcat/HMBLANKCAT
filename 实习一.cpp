#include <iostream>
using namespace std;
int main()
{
	int a = 100;
	int b = 300;
	cout << "a+b=" << a+b <<endl;
	cout <<"a-b="<<a-b<<endl;
	cout <<"a*b="<<a*b<<endl;
	cout<<"a/b="<<a/b<<endl;
	cout<<"请输入a的值："<<endl;
	cin>>a;
	cout<<"请输入b的值："<<endl;
	cin>>b;
	if (a == 0 and b == 0)
	{
    	cout<<"程序结束！"<<endl;
	    return 0;
	}
	else
	{
	    cout << "a+b=" << a+b <<endl;
	    cout <<"a-b="<<a-b<<endl;
	    cout <<"a*b="<<a*b<<endl;
	    cout<<"a/b="<<a/b<<endl;
		cout<<"请输入a的值："<<endl;
    	cin>>a;
    	cout<<"请输入b的值："<<endl;
	    cin>>b;
	};
	system("pause");
	return 0;
}