#include <iostream>
#include <math.h>
using namespace std;
main ()
{
	int a,i,mayor,menor;
	cout<<"ingrese 20 numeros ";
	mayor=-999;
	menor=99999999;
	for(a=1;a<=20;a++)
	{
		cout<<"\ningrese numero\t";
		cin>>i;
		if(i>mayor)
		{
		mayor=i;	
		}	
		if(i<menor)
		{
			menor=i;
		}
	}	
	cout<<"el numero mayor es: "<<mayor;
	cout<<"\nel numero menorr es: "<<menor;
}
