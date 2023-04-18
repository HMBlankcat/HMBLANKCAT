#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	srand((unsigned int)time(0));//随机数种子
	int randomInt =rand()%100;//0－99间的随机数
	int Caiint;
	while (true)
	{
	    cout <<"请输入一个99以内的非负整数进行猜测:"<<endl;
	    cin>>Caiint;
	    if(Caiint>randomInt)
	    {
	    	cout <<"猜大了！"<<endl;
	    }
	    else if(Caiint<randomInt)
	    {
	    	cout<<"猜小了！"<<endl;
	    }
	    else
	    {
	    	cout<<"猜测正确,即将退出程序"<<endl;
	    	
	    	return 0;
	    }
	};
	
	system("pause");
	return 0;
}