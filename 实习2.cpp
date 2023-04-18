#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setiosflags(ios::right);
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j<=i;j++)
		{
			cout<<std::right<<setw(7)<<i<<"*"<<j<<"="<<i*j<<" ";
			
		}
		cout<<endl;
	};
    return 0;	
}