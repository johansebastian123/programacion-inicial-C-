#include <iostream>
using namespace std;
int main()
{
	int n,factorial=1;
	{
		cout<<"favor ingrear un numero\t";
		cin>>n;
		for(int x=1;x<=n;x++)
		{
			factorial*=x;
			cout<<"el factorial de "<<n<<" es "<<factorial<<"\n";
		}
	}
} 
