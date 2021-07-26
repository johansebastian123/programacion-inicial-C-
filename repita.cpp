#include <iostream>
#include <cstdlib>
using namespace std;
int main()
	{
		srand (60);
		for (int i=0;i<=10;i++)
		{
			cout<<1+(rand()%10)<<endl;
		}
		return 0;
	}
