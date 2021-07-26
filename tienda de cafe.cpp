#include <iostream>
using namespace std;
main()
{
	int d,m,a;
	bool bisiesto;
	cout<<"            EMPRESA DE CAFE\n";
	cout<<"ingrese el ano\t";
	cin>>a;
	cout<<"\ningrese el mes\t";
	cin>>m;
	bisiesto=((a%4==0) || (a%400==0) && (a&1000==0));
	if ((m==1) || (m==6) || (m==5) || (m==7) || (m=8) || (m=10) || (m==12))
		{
			d=31;
		}
		else
		{
		if(m==2)
		{
			if(bisiesto)
			{
				d=29;
				cout<<"\nel ano es bisiesto\n";
			}
			else
			{
				d=28;
			}
			cout<<"el mes "<<m<<" tiene "<<d<<" dias \n";
		}
	}
}
